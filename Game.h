#ifndef GAMING_H
#define GAMING_H

#include <iostream>
#include <string.h>

using namespace std;
//making 3 base classes Hero, Enemy, Sidekick

//making hero base class
class Hero
{
private:
	//default Hero constructor
	Hero();
public:
	//taking input from user;
	Hero(string name, string species, string age);
	string Hero_Name;
	string Hero_Species;
	string Hero_Age;
	int Hero_Health;
	int Hero_Damage;
	//Hero status check
	void Hero_Status_Check();
};

#endif
