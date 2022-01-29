#ifndef	INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

# include <iostream>

class	Integer
{
	private:

		int	_n;

	public:

		Integer(int const n);
		~Integer(void);

		int	getValue(void) const;
		
		Integer&	operator=(const Integer& rhs); // rhs pour right hand side, l'operande a droite de l'operateur
		Integer		operator+(const Integer& rhs) const;
};

std::ostream&	operator<<(std::ostream& o, Integer const& rhs);

#endif
