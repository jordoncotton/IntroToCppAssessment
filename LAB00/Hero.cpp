#include "Hero.h"

/*Hero will fight and takedamage with power doing the attack
and making the hero lose health after taking damage.*/
void Hero::Fight(Hero&hero)
{
	hero.TakeDamage(mPower);
}

/*Will allow the console to keep the heros name constant
and print there health && power to console. Print*/
void Hero::HeroInfo()
{
	GetHealth();
	GetPower();
}

/*If the hero is alive there health and power
will be greater than zero returning true.*/
bool Hero::IsAlive()
{
	if (mHealth > 0)
	{
		return true;
	}
	return false;
	
}

/*The hero will take a certain amount of 
damage giving the hero a certain amount(random number)
of health and power.*/
void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
}

/*The hero will get there health also where a random
number will generate returning the health of the hero after the 
attacks and will generate a random number.*/
int Hero::GetHealth()
{
	return mHealth;
}

/*Where the hero will get there power to attack and have strength
and return the power of the hero and will generate a random number.*/
int Hero::GetPower()
{
	return mPower;
}
/*This will allow me to Print out the heros health and power
letting the player know how much health and power that hero 
has left.*/
void Hero::PrintInfo()
{
	std::cout << "His health is: " << GetHealth() << std::endl;
	std::cout << "His power is: " << GetPower() << std::endl;
}

const char* Hero::GetName()
{
	return mName;
}

Hero::Hero(const char* Name)
{
	mHealth = 100;
	mPower = rand() % 20 + 1;
	mName = Name;
}

Hero::Hero()
{
	mHealth = 100;
	mPower = rand() % 20 + 1;
}

