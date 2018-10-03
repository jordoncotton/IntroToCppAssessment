#include "Game.h"
/*Two heros are placed into battle and are referenced 
to each other ti fight and print aout there health after
they have fought.*/
Hero Game::Battle(Hero&hc1, Hero&hb2)
{
	while (hc1.IsAlive() && hb2.IsAlive())
	{
		std::cout << "IronMan has " << hc1.GetHealth() << "Health" << std::endl;

		std::cout << "CapTain DOODOO has " << hb2.GetHealth() << "Health" << std::endl;

		hc1.Fight(hb2);

		hb2.Fight(hc1);
	}

	/*Will tell if the first hero is alive
	returning that hero for the player to use.*/
	if (hc1.IsAlive())
	{
		std::cout << "IronMan Won!" << std::endl;
		return hc1;
	}

	/*Else the hero is dead!*/
	else
	{
		std::cout << "Hero is dead!" << std::endl;
	}

	/*Will tell if the second hero is alive
	returning that hero for the player to use.*/
	if (hb2.IsAlive())
	{
		std::cout << "CapTain DOODOO Won!" << std::endl;
		return hb2;
	}

	/*Else the hero is dead!*/
	else
	{
		std::cout << "Hero is dead!" << std::endl;
	}
}
