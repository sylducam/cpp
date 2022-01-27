#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "Usage : ./replace file <word_to_replace_in_file> <replacement_word>" << std::endl;
		return (-1);
	}
	else
	{
		std::ifstream	my_file(argv[1]);
		if (my_file.fail())

		{
			std::cout << "There's an issue with your file. Make sure that it exists and has the right rights." << std::endl;
			return (-1);
		}
		if (argv[2][0] == 0)
		{
			std::cout << "Second argument should not be empty." << std::endl;
			return (-1);
		}
		if (argv[3][0] == 0)
		{
			std::cout << "Third argument should not be empty." << std::endl;
			return (-1);
		}
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];
		std::string		res;
		size_t 			pos = 0;
		std::string		temp((std::istreambuf_iterator<char>(my_file)), std::istreambuf_iterator<char>());
		std::ofstream	out_file;
		for (size_t n = temp.find(s1, 0); n != std::string::npos ; n = temp.find(s1, n))
		{
			res.append(temp, pos, n - pos);
			res.append(s2);
			pos = n + s1.size();
			n++;
		}
		res.append(temp.begin() + pos, temp.end());
		my_file.close();
		temp = argv[1];
		temp.append(".replace");
		out_file.open(temp);
		if (out_file.fail())

		{
			std::cout << "There's an issue with your file. Make sure that it exists and has the right rights." << std::endl;
			return (-1);
		}
		out_file << res;
		out_file.close();
	}
	return (0);
} 