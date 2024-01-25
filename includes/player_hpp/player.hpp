#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <iostream>

class Player
{
	private:
			std::string	name;
			int	scores[10];
			int	playerNum;
	public:
			Player(const std::string name, int playerNum);
			~Player();
			std::string	getName(void) const;
			int	getScore(int roundNum) const;
			int	getPlayerNum(void) const;
			void	setScore(int roundNum, int score);
};

#endif