 #include "Game.h"
/*Main will check and test and allow me to print everything in cpp so everthing will
come out the way I want it too and able to fix whatever problem 
I have.*/
int main()
{
	srand(time(NULL));
	
	Stack Marvels;
	Stack DCUniverse;

	Hero* hc1 = new Hero("IronMan");
	Hero* hb2 = new Hero("CapTain DOODOO");

	Marvels.push(hc1);
	DCUniverse.push(hb2);

	Game civilWar;
	civilWar.Battle(Marvels.top(), DCUniverse.top());


	system("pause");
}