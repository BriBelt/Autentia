#include "../../includes/UI_hpp/ui.hpp"

void	printHeader(void)
{
	std::cout << " __________________________________________________________________________ " << std::endl;
	std::cout << "|";
	std::cout << std::setw(13);
	std::cout << "Names";
	std::cout << "|";
	for (int i = 0; i < 10; i++){
		std::cout << std::setw(5);
		std::cout << i + 1;
		std::cout << "|";
	}
	std::cout <<  std::endl;
	std::cout << " __________________________________________________________________________ " << std::endl;
}

void	Printing::printScores(void)
{
	//int numberPlayers = 3;

	printHeader();
	/*for (int i = 0; i < numberPlayers; i++{

	})*/
}
