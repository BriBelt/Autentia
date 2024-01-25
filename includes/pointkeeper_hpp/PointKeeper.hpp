#ifndef PointKeeper_HPP
# define PointKeeper_HPP
# include <iostream>
# include "player.hpp"

class PointKeeper{
	public:
		PointKeeper();
		int calc_punt(Player play, int round, int stand, int thrown);
		void sumpunt(Player play, int round, int punt);
		int total_points(Player play, int round);
	private:	
		int multiplier;
};


#endif
