#include <iostream>
#include <string.h>
#include "Hero.h"
using namespace std;

Hero::Hero()
{
	default_name = "Gigachad";
	default_species = "???";
	default_age = 20;
	default_health = 100;
	default_damage_per_hit = 20;
};

//Hero using user input
Hero::Hero(string name, string species, int age): Hero()
{
	Hero_Name = name;
	Hero_Species = species;
	Hero_Age = age; //age in decimal
	//health and damge of hero are always set to default
	Hero_Health = default_health;
	Hero_Damage = default_damage_per_hit;
	cout << "Hero age: " << Hero_Age << endl;


}

//Hero status checks
void Hero::Hero_Introduction_Check(){
	cout << endl;
	cout << "Welcome!" << endl;
	cout << "Hero name: " << Hero_Name << endl;
	cout << "Hero species: " << Hero_Species << endl;
	cout << "Hero age: " << Hero_Age << endl;
	cout << "Hero health: " << Hero_Health << endl;
	cout << "Hero damage per action: " << Hero_Damage << endl;
	cout << "A fine addition to the team!" << endl;
	cout << endl;
}

//Hero gets hit
void Hero::Hero_Attacked(){
	Hero_Health = Hero_Health - 10;
}

//Hero dodged
void Hero::Hero_Dodged(){
	Hero_Health = Hero_Health - 3;
}

//get Hero health
int Hero::Get_Hero_Health(){
	return Hero_Health;
}