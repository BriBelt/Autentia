#include "includes/player_hpp/player.hpp"

Player::Player(const std::string name, int playerNum)
{
	this->name = name;
	this->playerNum = playerNum;
	for (int i = 0; i < 10; i++)
		this->scores[i] = 0;
}

Player::~Player()
{
}

std::string	Player::getName(void) const
{
	return (this->name);
}

int	Player::getScore(int roundNum) const
{
	return (this->scores[roundNum]);
}

int	Player::getPlayerNum(void) const
{
	return (this->playerNum);
}

void	Player::setScore(int roundNum, int score)
{
	this->scores[roundNum] += score;
}
