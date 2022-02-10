#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", target, 145, 137)  {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->canExecute(executor);

	std::ofstream outfile;
	std::string fileName(this->getTarget() + "_shrubbery");
	std::string content;

	outfile.open(fileName.c_str());
	if (outfile.fail())
		throw ShrubberyCreationForm::CantWriteFile();
	outfile << "        _-_" << std::endl;
	outfile << "     /~~   ~~\\" << std::endl;
	outfile << "  /~~         ~~\\" << std::endl;
	outfile << " {               }" << std::endl;
	outfile << "  \\  _-     -_  /" << std::endl;
	outfile << "       \\\\ //   " << std::endl;
	outfile << "        | |     " << std::endl;
	outfile << "        | |     " << std::endl;
	outfile << "       // \\\\" << std::endl;
	outfile.close();
	std::cout << fileName << " file created." << std::endl;
}
