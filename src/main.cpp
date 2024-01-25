#include "includes/include_1.hpp"

int main()
{
	std::string str;

	std::cout << "Welcome to our Bowling!" << std::endl;
	std::cout << "Enter the number of players (Select a number between 1 and 4): ";
	std::cin >> str;
	if (std::atoi(str.c_str()) < 1 || std::atoi(str.c_str()) > 4)
		return 0;
	std::cout << str << std::endl;

	return 0;
}