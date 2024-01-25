#include "includes/Player.hpp"

Player::Player(const std::string name, int playerNum)
{
	this->name = name;
	this->playerNum = playerNum;
	std::vector<int> firstShots(0);
	std::vector<int> secondShots(0);
	iota(firstShots.begin(), firstShots.end(), 1);
	iota(secondShots.begin(), secondShots.end(), 1);
 	for (int i = 0; i < 10; i++) {
        cout << firstShots[i] << " ";
    }
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
