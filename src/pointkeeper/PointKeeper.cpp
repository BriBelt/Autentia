#include "PointKeeper.hpp"

PointKeeper::PointKeeper()
{
	multiplier=0;
}
int PointKeeper::calc_punt(Player play, int round, int thr1, int thr2)
{
	int punt = thr1 + thr2;

	if (round < 9)
		sumpunt(play, round, punt);
	if (multiplier==1)
	{
		sumpunt(play, round-1, thr1);
		multiplier--;
	}
	if (multiplier==2)
	{	
		if ( thr1 != 10)
			multiplier--;
		sumpunt(play, round-1, punt);
		multiplier--;
	}
	if (multiplier>2)
	{
		if ( thr1 != 10)
			multiplier--;
		sumpunt(play, round-1, punt);
		sumpunt(play, round-2, punt);
		multiplier-=2;
	}
	if (thr1==10)
		multiplier += 2;
	else if (thr1 + thr2 == 10)
		multiplier++;	
}