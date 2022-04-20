# include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int	main (void)
{
	Data*	data = new Data();
	uintptr_t	raw;
	
	std::cout << data->_i;
	std::cout << data->_c;
	std::cout << std::endl;

	raw = serialize(data);
	data = deserialize(raw);

	std::cout << data->_i;
	std::cout << data->_c;
	std::cout << std::endl;

	delete data;
	return (0);
}