#include "Karen.hpp"

void Karen::complain(std::string level) 
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Karen::*f[4]) () = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*f[i])();
			break ;
		}
	}

}

void Karen::debug(void)
{
	std::cout << "DEBUG > ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;
}

void Karen::info(void)
{
	std::cout << "INFO > ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! " \
	"If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void Karen::warning(void)
{
	std::cout << "WARNING > ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just " \
	"started working here last month.";
	std::cout << std::endl;
}

void Karen::error(void)
{
	std::cout << "ERROR > ";
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}
