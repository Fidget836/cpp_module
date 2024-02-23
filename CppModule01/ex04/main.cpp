#include "replace.hpp"

int	main(int argc, char **argv, char **env)
{
	std::string fileContenu;

	if (argc < 4 || argc > 4)
	{
		std::cout << "Not enough argument !" << std::endl;
		return (1);
	}
	replace Replace;
	fileContenu =  Replace.duplicateFile(argv[1], argv[2], argv[3]);
	Replace.replaceFind(fileContenu);
	return (0);
}
