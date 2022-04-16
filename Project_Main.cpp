#include <iostream>
#include <string.h>
#include "Hero.h"
#include "Enemy.h"
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
	cout << "What's your age? ";
	cin >> H_Age;
    if ((H_Age < 18) || (H_Age > 60))
	{
		if (H_Age < 18){
			cout << "Let an adult handle this, you child." << endl;
		}
		else if (H_Age > 60){
			cout << "Stand down gramps, we need someone who can walk!" << endl;
		}
		return 0;
	}
	Hero Player = Hero(H_Name, H_Species, H_Age);
	//hero status check
	Player.Hero_Introduction_Check();

    //start battle - 2 goblins, 1 bossman
    char Fight_Start1;
    cout << "You encountered a goblin. Will you fight (Y/N): ";
    cin >> Fight_Start1;
    Goblin Goblin1();
    while ((Fight_Start1 == 'Y') || (Goblin.Enemy_Health_Check() > 0) || (Hero.Get_Hero_Health() > 0 )){
        //player action attack-A, dodge -D, run -R
        char Player_Action;
        cout << "Do you want to attack, dodge or run? (A/D/R) ";
        cin >> Player_Action;
        switch (Player_Action){
            case 'A':
                Goblin.Goblin_Attacked();
                Hero.Hero_Attacked();
                break;
            case 'D':
                break;
            case 'R':
                break;
            default:
                Goblin.Goblin_Attacked();
                Hero.Hero_Attacked();
                break;
        }
        cout << "Hero has " << Hero.Get_Hero_Health() << " health left" << endl;
        cout << "Goblin has " << Goblin.Enemy_Health_Check() << " health left" << endl;
        if (Player_Action == 'R')
            Fight_Start1 = 'N';
    }
	return 0;
}
