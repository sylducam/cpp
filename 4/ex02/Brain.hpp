#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <cstdlib>

class Brain
{
	private:

		std::string _ideas[100];

	public:

		Brain(void);
		Brain(Brain const& instance);
		void operator=(Brain const& instance);
		~Brain(void);
};

#endif