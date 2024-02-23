#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class replace
{
	private:
		std::string fileName;
		std::string s1;
		std::string s2;
	public:
		replace();
		~replace();
		std::string duplicateFile(std::string fileNameArg, std::string s1Arg, std::string s2Arg);
		void replaceFind(std::string fileContenu);
};

#endif
