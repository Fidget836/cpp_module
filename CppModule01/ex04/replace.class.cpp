#include "replace.hpp"

replace::replace()
{
}


replace::~replace()
{
}

std::string replace::duplicateFile(std::string fileNameArg, std::string s1Arg, std::string s2Arg)
{
	fileName = fileNameArg;
	std::ifstream inputFile(fileName);
	s1 = s1Arg;
	s2 = s2Arg;
	if (inputFile.is_open())
	{
		std::string fileContent((std::istreambuf_iterator<char>(inputFile)),
                                 std::istreambuf_iterator<char>());
		inputFile.close();
		return (fileContent);
	}
	else
		std::cout << "Could not open this file." << std::endl;
	return (NULL);
}

void	replace::replaceFind(std::string fileContenu)
{
	size_t	pos = 0;

	while ((pos = fileContenu.find(s1, pos)) != std::string::npos)
	{
        fileContenu.erase(pos, s1.length());
        fileContenu.insert(pos, s2);
        pos += s2.length();
	}
	std::ofstream outputFile(fileName + ".replace");
	if (outputFile.is_open())
	{
		outputFile << fileContenu;
		outputFile.close();
	}
	else
		std::cout << "Could not open this file." << std::endl;
}
