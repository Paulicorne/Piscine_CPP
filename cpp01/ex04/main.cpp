#include <iostream>
#include <fstream>
#include <sstream>

int		error_manager(int error)
{
	if (error == 1)
	{
		std::cout << "An error occured.\nWe need three valid arguments to make our programm a success." << std::endl;
		std::cout << "Try again like_ > [./replace -filename- -s1- -s2-]" << std::endl;
	}
	else if (error == 2)
	{
		std::cout << "An error occured.\nStrings arguments are corrupted.";
		std::cout << " Try again with non null ones." << std::endl;
	}
	else if (error == 3)
	{
		std::cout << "An error occured.\nThe file you gave is actually unexistant.";
		std::cout << " Try again with an existing one." << std::endl;
	}
	else if (error == 4)
	{
		std::cout << "An error occured.\nThe [file].replace creation failed.";
	}
	return (1);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string file = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		
		if (file.empty() || s1.empty() || s2.empty()) // std::string comes with handy member functions :)
			return (error_manager(2));
		else
		{
			// Settling current stream on source file
			std::ifstream  ifs(file); 			// Input file stream, opening our stream

			if (!ifs.good()) 					// Returns false if one of the stream's error state flags is set
				return (error_manager(3));
			
			std::stringstream line; 			// Constructs a stringstream object with an empty sequence as content
			line << ifs.rdbuf(); 				// Returns a pointer to the stream buffer object currently associated with the stream

			std::string str = line.str(); 		// Returns a string object with a copy of the current contents of the stream
			
			size_t start_pos = 0;
    		while((start_pos = str.find(s1, start_pos)) != std::string::npos) 
			{
				str.replace(start_pos, s1.length(), s2);
       			start_pos += s2.length(); 		// In case 's2' contains 's2', like replacing 'x' with 'yx'
			}
			ifs.close();

			//Settling current stream on file.replace creation
			std::ofstream ofs(file + ".replace"); //Output file stream, create [file].replace
			if (!ofs.good())
				return (error_manager(4));
			ofs << str; 						//Redirecting our modified str into output file stream
			ofs.close();
		}
	}
	else
		return (error_manager(1));
	return (0);
}