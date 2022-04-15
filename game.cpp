#include <iostream>
#include <string.h>

#include "Gaming.h"


using namespace std;

//Hero
//Hero default constructor
Hero::Hero()
{
	string default_name = "Gigachad";
	string default_species = "???";
	int default_age = 20;
	int default_health = 100;
	int default_damage_per_hit = 10;
};

//Hero using user input
Hero::Hero(string name, string species, string age)
{
	Hero_Name = name;
	Hero_Species = species;
	//no boomers or zoomers allowed
	if ((age < 18) || (age > 60))
	{
		if (age < 18)
			cout << "Let an adult handle this, you child." << endl;
		else if (age > 60)
			cout << "Stand down gramps, we need someone who can walk!" << endl;
		Hero_Age = default_age;
	}
	if ((age>= 18) && (age <= 60))
	{
		Hero_Age = age;
		cout << Hero_Age << ", huh. A fine addition to the team!" << endl;
	}
	//health and damge of hero are always set to default
	Hero_Health = default_health;
	Hero_Damage = default_damage_per_hit;

}

//Hero status checks
void Hero::Hero_Status_Check(){
	cout << "Hero name: " << Hero_Name << endl;
	cout << "Hero species: " << Hero_Species << endl;
	cout << "Hero age: " << Hero_Age << endl;
	cout << "Hero health: " << Hero_Health << endl;
	cout << "Hero damage per action: " << Hero_Damage << endl;
}

//Enemy
//Default enemy
Enemy::Enemy()
{
	Enemy_Species = ???
	Enemy_Health = 50;
	Enemy_Attack = 10;
}

virtual void Enemy::Enemy_Status_Check(){
	cout << "Enemy is a " << Enemy_Species << endl;
	cout << "Health: " << Enemy_Health << endl;
	cout << "Attack is: " << Enemy_Attack << endl;
}

//making a goblin
Goblin::Goblin(int goblin_health, int goblin_attack): Enemy(Enemy_Health, Enemy_Attack)
{
	Goblin_Weapon = "Bite";
	Goblin_Species = "Goblin";
}

//making a Bossman
Bossman::Bossman(int bossman_starting_health): Enemy(Enemy_Health){
	Bossman_Current_Health = bossman_starting_health * 2;
	Bossman_Weapon = "Big smash";
	Bossman_Attack = 20;
}


