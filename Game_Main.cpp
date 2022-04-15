#include <iostream>
#include <string.h>

#include "Gaming.h"

using namespace std;

int main()
{
	char Game_Start;
	cout << "Welcome to the game. Do you want to play (Y/N): ";
	cin >> Game_Start;
	if (Game_Start == 'N')
		return 0;
	//taking user input
	string H_Name;
	string H_Species;
	int H_Age;
	cout << "Enter your name: ";
	cin >> H_Name;
	cout << "And your species? ";
	cin >> H_Species;
	cout << "What's your age";
	cin >> H_Age;
	
	//making the Hero;
	Hero Player = Hero(H_Name, H_Species, H_Age);
	return 0;
}
