#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>


int verif_space(std::string s1)
{
    int i = -1;
    while (s1[++i])
    {
        if (s1[i] != ' ')
            return (0);
    }
    return (1);
}

int main (int ac, char **av)
{
    std::string Filename;		// Question : what's the point of creating some std::string objects instead of simple strings ?
    std::string str;
    std::string buffer;
    std::string s1;
    std::string s2;
    size_t	pos = 0;
	size_t	first_pos = 0;
    if (ac != 4)
    {
        std::cerr << "Error: ./replace (filename) (s1) (s2)" << std::endl;
        return (1);
    }
    Filename = av[1];
    s1 = av[2];
    s2 = av[3];
    if (Filename.empty() == true || s1.empty() == true || s2.empty() == true			// Answer : std::string class comes with handy member functions :)
    || verif_space(s1) == 1 || verif_space(s2) == 1 || verif_space(Filename) == 1)
	{
		std::cerr << "Error: A files is empty" << std::endl;
		return (1);
	}
    std::ifstream currentFile(Filename);	// Input file stream, opening our stream in an instance of std::ifstream
    if (currentFile.fail())					// This allows to use "fail" (inherited from std::ios) this way, because it is included in this class' methods
    {
        std::cout << "Error: Opening file" << std::endl;
        return (1);
    }

    std::ofstream out((Filename + std::string(".replace")).c_str()); // Output file stream, creates [Filename].replace
    if (out.fail())
    {
        std::cout << "Error: creating file" << std::endl;
        return (1);
    }

    while (std::getline(currentFile, buffer))
    {
        first_pos = 0;
        pos = 0;
        while ((pos = buffer.find(s1, first_pos)) != std::string::npos) // looking for s1 in current line present in the buffer, until std::string::npos (means "until the end of the string")
        {
			// std::string::append is special : depending on the number of args you give it, the function will behave differently :
            str.append(buffer, first_pos, pos - first_pos);				// here it appends a copy of a substring (beginning at first_pos/ending with a len of pos-first_pos) of str.
            str.append(s2);												// here it appends a copy of s2
            first_pos = pos + s1.size();	// Update first_pos : 
        }
        str.append(buffer, first_pos);		// Appends a copy of the first n characters in the array of characters pointed by s.
        str.append("\n");
    }
    out << str;
    currentFile.close();					// Redirecting our modified str into output file stream
    out.close();
    return (0);
}    