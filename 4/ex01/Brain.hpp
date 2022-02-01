#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &instance);
		void operator=(Brain const &instance);
		~Brain(void);
	private:
		std::string ideas[100];
};

#endif