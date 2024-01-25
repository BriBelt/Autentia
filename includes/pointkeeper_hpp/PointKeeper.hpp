#ifndef PointKeeper_HPP
# define PointKeeper_HPP
# include <iostream>
# include "player.hpp"

class PointKeeper{
	public:
		PointKeeper();
		int calc_punt(int round, int stand, int throwados);
		void sumpunt(Player play, int round, int punt);
	private:	
		int multiplier;
};


#endif
