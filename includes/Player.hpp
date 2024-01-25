#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <iostream>

class Player
{
	private:
			std::string	name;
			std::vector<int>	firstShots; 
			std::vector<int>	secondShots; 
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
