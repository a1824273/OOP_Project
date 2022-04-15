#include <iostream>
#include <string.h>

#include "Gaming.h"

using namespace std;

int main()
{
	char Game_Start;
	//Character customisation
	string H_Name;
	string H_Species;
	int H_Age;
	cout << "Welcome to the game. Do you want to play (Y/N): ";
	cin >> Game_Start;
	if (Game_Start != 'Y')
		return 0;
	//making the Hero
	cout << "Enter your name: ";
	cin >> H_Name;
	cout << "And your species? ";
	cin >> H_Species;
	cout << "What's your age";
	cin >> H_Age;
	Hero Player = Hero(H_Name, H_Species, H_Age);
	//hero status check
	Player.Hero_Status_Check();


	return 0;
}
