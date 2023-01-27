#include "Info.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: invalid args. (./exec filename s1 s2)" << std::endl;
		return (0);
	}
	Info info(argv);
	info.job();
	return (0);
}