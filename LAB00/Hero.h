#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
/*This class hero will allow me to give the hero there health and
power and a name. Allowing me to also have them fight, takedamage and 
print there info out in Hero.cpp (line 58) and main.cpp.*/
class Hero
{
private:
	int mHealth;
	int mPower;
	const char *mName;
	
public:
	void Fight(Hero&);
	void HeroInfo();
	bool IsAlive();
	void TakeDamage(int);
	int GetHealth();
	int GetPower();
	void PrintInfo();
	const char* GetName();
	Hero(const char*);
	Hero();
};

