#ifndef	SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class	Sample
{
	private:

		int	_foo;

	public:

		Sample(void);				   		  // canonical (constructor by default)
		Sample(int const n);				  // parametric constructor
		Sample(const Sample& src);		      // canonical (constructor by copy)
		~Sample(void);						  // canonical (destructor)

		
		Sample&	operator=(const Sample& rhs); // canonical (assignation operator)
		int		getFoo(void) const;
};

std::ostream&	operator<<(std::ostream& o, Sample const& rhs);

#endif
