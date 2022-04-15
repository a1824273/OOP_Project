#include <iostream>
#include <string.h>

#include "Gaming.h"


using namespace std;

//Hero
//Hero default constructor
Hero::Hero()
{
	string default_name = "Gigachad";
	string default_species = "Goblin";
	int default_age = 20;
	int default_health = 100;
	int default_damage_per_hit = 5;
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
	cout << "Hero Damage: " << Hero_Damage << endl;
}
