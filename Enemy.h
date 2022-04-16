#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string.h>
#include "Hero.h"
using namespace std;

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
    virtual int Enemy_Health_Check();
};

//mkaing a derived enemy class called golbin
class Goblin: public Enemy
{
public:
	//default goblin
	Goblin();
    int Goblin_health;
    int Goblin_strength;
	string Goblin_Weapon;
	string Goblin_Species;

    //goblin attack
    void Goblin_Attacked();

    //return goblin health
    int Enemy_Health_Check();
};

//making a derived hero class called Bossman
class Bossman: public Enemy
{
public:
	Bossman();
	int Bossman_Current_Health;
	string Bossman_Weapon;
	int Bossman_Attack;

    //return bossman health
    int Enemy_Health_Check();
};
#endif