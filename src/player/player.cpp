#include "../../includes/Player_hpp/Player.hpp"

Player::Player(const std::string name, int playerNum)
{
	this->name = name;
	this->playerNum = playerNum;
	this->multiplier = 0;
	std::vector<int> firstShots(10);
	std::vector<int> secondShots(10);
	fill(firstShots.begin(), firstShots.end(), 0);
	fill(secondShots.begin(), secondShots.end(), 0);
 	for (int i = 0; i < 10; i++) {
		std::cout << firstShots[i] << " ";
    }
}

Player::~Player()
{
}

std::string	Player::getName(void) const
{
	return (this->name);
}

int	Player::getFirstShots(int roundNum) const
{
	return (this->firstShots[roundNum]);
}

int	Player::getSecondShots(int roundNum) const
{
	return (this->secondShots[roundNum]);
}

int	Player::getPlayerNum(void) const
{
	return (this->playerNum);
}

int	Player::getMultiplier(void) const
{
	return (this->multiplier);
}

void	Player::setMultiplier(int value)
{
	this->multiplier = value;
}
