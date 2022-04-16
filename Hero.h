#ifndef _HERO_H
#define _HERO_H

#include <iostream>
#include <string.h>

using namespace std;

//making hero base class
class Hero
{
public:
	//default Hero constructor
	Hero();
	string default_name;
	string default_species;
	int default_age;
	int default_health;
	int default_damage_per_hit;
	
	//taking input from user;
	Hero(string name, string species, int age);
	string Hero_Name;
	string Hero_Species;
	int Hero_Age;
	int Hero_Health;
	int Hero_Damage;

	//Hero introcduction check
	void Hero_Introduction_Check();

	//Hero attack;
	void Hero_Attacked();

	//Hero dodge;
	void Hero_Dodged();

	//Hero health check;
	int Get_Hero_Health();
};
#endif