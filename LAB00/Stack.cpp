#include "Stack.h"
/*Wraps Isempty to it only want to return the hero
if it's not empty. Also this will be returning by putting
hero on the top function.*/
Hero& Stack::top()
{
	
		return mData[mCount -1];
	
}

/*If the stack is empty we can't remove anything otherwise 
we have removed that one thing that was on top.*/
bool Stack::pop()
{
	
	{
		mCount = mCount - 1;
		return true;
	}
	return false;
}

/*Will allow the console to push poopoo on to the stack
and then add a hero to mData.*/
bool Stack::push(Hero* IronMan)
{
	if (IsEmpty())
	{

		mData[mCount++] = *IronMan;
		return true;
	}
	return false;
}
/*If the stack is empty then it will return counting as 
zero if not it will return false.*/
bool Stack::IsEmpty()
{
	return (mCount == 0);
}
/*If the stack is full then it will return counting 20 if not 
it will return false.*/
bool Stack::IsFull()
{
	return mCount == 20;
	return false;
}

