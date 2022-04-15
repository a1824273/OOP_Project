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

//making Enemy class
class Enemy
{
public:
	//default enemy
	Enemy();
	string Enemy_Species;
	int Enemy_Health;
	int Enemy_Attack;
	virtual void Enemy_Status_Check();
};

//mkaing a derived enemy class called golbin
class Goblin: public Enemy
{
public:
	//default goblin
	Goblin(int goblin_health, int goblin_attack);
	string Goblin_Weapon;
	string Goblin_Species;
}

//making a derived hero class called Bossman
class Bossman: public Hero
{
	Bossman(int bossman_starting_health);
	int Bossman_Current_Health;
	string Boss_Weapon;
	int Bossman_Attack;
}


#endif
