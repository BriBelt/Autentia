#include "Player.hpp"

Player::Player(std::string name) name(name)
{
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

void	Player::setScore(int roundNum, int score)
{
	this->scores[roundNum] += score;
}
