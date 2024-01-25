#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <iostream>

class Player
{
	private:
			std::string	name;
			int	scores[10];
	public:
			Player(std::string name);
			~Player();
			std::string	getName(void) const;
			int	getScore(int roundNum) const;
			void	setScore(int roundNum, int score);
};

#endif
