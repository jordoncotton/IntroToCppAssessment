#pragma once
#include "Hero.h"
/*This class will allow me to pop a player off the stack to win lose or fight, 
put a hero on top as a winner or loser, push a hero to fight, win or lose and
count the random numbers of health and power in the hero.h.*/
class Stack
{
private:
	Hero mData[20];
	int mCount;

public:
	Stack()
	{
		mCount = 0;
	}
	Hero& top();
	bool pop();
	bool push(Hero*);
	bool IsEmpty();
	bool IsFull();
};