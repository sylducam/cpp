#include "whatever.hpp"



int main()
{
	int i1 = 2;
	int i2 = 3;
	std::cout << "int1 = " << i1 << std::endl;
	std::cout << "int2 = " << i2 << std::endl;
	::swap(i1, i2);
	std::cout << "int1 = " << i1 << std::endl;
	std::cout << "int2 = " << i2 << std::endl;
	i1 = 58;
	i2 = 32;
	std::cout << "min = " << ::min(i1, i2) << std::endl;
	std::cout << "max = " << ::max(i1, i2) << std::endl;
	std::cout << std::endl;

	std::string s1 = "chaine1";
	std::string s2 = "chaine2";
	std::cout << "s1 = " << s1 << std::endl;
	std::cout << "s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "s1 = " << s1 << std::endl;
	std::cout << "s2 = " << s2 << std::endl;
	std::cout << "min = " << ::min(s1, s2) << std::endl;
	std::cout << "max = " << ::max(s1, s2) << std::endl;
	// std::cout << "s1 = " << &s1 << std::endl;
	// std::cout << "s2 = " << &s2 << std::endl;
	// std::cout << "min = " << &::min(s1, s2) << std::endl;
	// std::cout << "max = " << &::max(s1, s2) << std::endl;
	return 0;
}

// class Awesome

// {

// public:

// Awesome(void) : _n(0) {}

// Awesome( int n ) : _n( n ) {}

// Awesome & operator= (Awesome & a) { _n = a._n; return *this; }

// bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }

// bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }

// bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }

// bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }

// bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }

// bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

// int get_n() const { return _n; }

// private:

// int _n;
// };

// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

// int main(void)
// {

// Awesome a(2), b(4);

// swap(a, b);
// std::cout << a << " " << b << std::endl;

// std::cout << max(a, b) << std::endl;

// std::cout << min(a, b) << std::endl;

// return (0);

// }
