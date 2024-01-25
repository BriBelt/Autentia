#include "PointKeeper.hpp"

PointKeeper::PointKeeper()
{
	multiplier=0;
}

int PointKeeper::calc_punt(Player play, int round, int stand, int thrown)
{
	if (round < 10)
	{
		sumpunt(play, round, thrown);
	}
	if (multiplier>0)
	{
		for (int i=multiplier; i>0; i--)
		{
			if (round - i >= 0)
				sumpunt(play, round - i, thrown);
		}
		multiplier--;
	}
	if (stand == 10 && thrown == 10)
		multiplier += 2;
	if (thrown == stand)
		multiplier++;
}

void PointKeeper::sumpunt(Player play, int round, int punt)
{
	play.scores[round] += punt;
}

int PointKeeper::total_points(Player play, int round)
{
	int total;

	for (int i=round; i>=0; i--)
	{
		total += play.scores[i];
	}
	return total;
}