#include "ShrubberyCreationForm.class.hpp"
#include "Bureaucrat.class.hpp"
#include "GradeTooLowException.class.hpp"
#include "NotSign.class.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string targetArg) : target(targetArg), AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Shrubbery Creation Form is created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form is destructed" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
		throw(NotSign());
	else if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	std::ofstream outputFile(target +  "_shrubbery");
	if (!outputFile.is_open())
	{
		std::cerr << "Erreur : Impossible d'ouvrir le fichier." << std::endl;
		return ;
	}
    outputFile << "               _{\\ _{\\{\\/}/}/}__" << std::endl;
    outputFile << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
    outputFile << "            {/{/\\}{/{/\\}(_)}{/{/\\}  _" << std::endl;
    outputFile << "         {\\{/(/}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
    outputFile << "        {/{/(_)/}{\\{/)/}{\\(_){/}/}/}/}" << std::endl;
    outputFile << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
    outputFile << "      {/{/{\\{\\{(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
    outputFile << "      _{\\{/{\\{/(_)/}/}{/{/{/\\}\\)(\\}{/\\}" << std::endl;
    outputFile << "     {/{/{\\{(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
    outputFile << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/)(/}" << std::endl;
    outputFile << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
    outputFile << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
    outputFile << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
    outputFile << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
    outputFile << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
    outputFile << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
    outputFile << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
    outputFile << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
    outputFile << "              (_)  \\.-'.-/" << std::endl;
    outputFile << "          __...--- |'-.-'| --...__" << std::endl;
    outputFile << "   _...--\"   .-'  |'-.-'|  ' -.  \"\"--..__" << std::endl;
    outputFile << " -\"    ' .  . '   |.'-._| '  . .  '   jro" << std::endl;
    outputFile << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
    outputFile << "          ' ..     |'-_.-|" << std::endl;
    outputFile << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
    outputFile << "              .'   |'- .-|   '." << std::endl;
    outputFile << "  ..-'   ' .  '.   `-._-_.'   .'  '  - ." << std::endl;
    outputFile << "   .-' '        '-._______.-'     '  ." << std::endl;
    outputFile << "        .      ~," << std::endl;
	outputFile.close();
	std::cout << "Fichier rempli." << std::endl;
	return ;
}
