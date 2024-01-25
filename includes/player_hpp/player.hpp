#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <iostream>
#include <vector>
#include <numeric>

class Player
{
	private:
			std::string	name;
			std::vector<int>	firstShots; 
			std::vector<int>	secondShots; 
			int	playerNum;
			int	multiplier;
	public:
			Player(const std::string name, int playerNum);
			~Player();
			std::string	getName(void) const;
			int	getFirstShots(int roundNum) const;
			int	getSecondShots(int roundNum) const;
			int	getPlayerNum(void) const;
			int	getMultiplier(void) const;
			void setMultiplier(int value);
};

#endif