#include "../../includes/UI_hpp/ui.hpp"

void	setPlayerIndex(int i)
{
	std::cout << "|";
	std::cout << std::setw(1);
	std::cout << i + 1;
	std::cout << "|";
}

void	setPlayerScore(int num)
{
	for (int i = 0; i < 10; i++){
		std::cout << std::setw(5);
		std::cout << num;
		std::cout << "|";
	}
}

void	setPlayerName(std::string name)
{
	std::cout << std::setw(10);
	std::cout << name;
	std::cout << "|";
}


void	printHeader(void)
{
	std::cout << " _________________________________________________________________________ " << std::endl;
	std::cout << "|";
	std::cout << std::setw(12);
	std::cout << "Names";
	std::cout << "|";
	for (int i = 0; i < 10; i++){
		std::cout << std::setw(5);
		std::cout << i + 1;
		std::cout << "|";
	}
	std::cout <<   std::endl;
	std::cout << " _________________________________________________________________________ " << std::endl;
}

void	Printing::printScores(void)
{
	int numberPlayers = 5;
	std::string name = "JUAN";

	printHeader();
	for (int i = 0; i < numberPlayers; i++){
		setPlayerIndex(i);
		setPlayerName(name);
		setPlayerScore(i);
		std::cout << std::endl;
		/*std::cout << std::setw(1);
		std::cout << i;
		std::cout << "|";*/
		std::cout << " _________________________________________________________________________ " << std::endl;
	}
}
