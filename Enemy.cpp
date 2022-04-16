#include <iostream>
#include <string.h>
#include "Enemy.h"
#include "Hero.h"
using namespace std;

//Enemy
//Default enemy
Enemy::Enemy()
{
	Enemy_Species = "???";
	Enemy_Health = 50;
	Enemy_Attack = 10;
}

void Enemy::Enemy_Status_Check(){
	cout << "Enemy is a " << Enemy_Species << endl;
	cout << "Health: " << Enemy_Health << endl;
	cout << "Attack is: " << Enemy_Attack << endl;
}

int Enemy::Enemy_Health_Check(){
    return Enemy_Health;
}

//making a goblin
Goblin::Goblin(): Enemy()
{
    Goblin_health = Enemy_Health;
    Goblin_strength = Enemy_Attack;
	Goblin_Weapon = "Bite";
	Goblin_Species = "Goblin";
}

void Goblin::Goblin_Attacked(){
    Goblin_health = Goblin_health - 20;
    cout << Goblin_health << endl;
}

int Goblin::Enemy_Health_Check(){
    return Goblin_health;
}

//making a Bossman
Bossman::Bossman(): Enemy(){
	Bossman_Current_Health = Enemy_Health * 2;
	Bossman_Weapon = "Big smash";
	Bossman_Attack = 20;
}

//returning bossman health
int Bossman::Enemy_Health_Check(){
    return Bossman_Current_Health;
}