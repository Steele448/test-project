#include "stdafx.h"
#include <iostream>
#include <string>
#include <random>
#include <windows.h>

using namespace std;

class Player //This is just for the info page of the game
{
public:
	string name, description, strong, weak;
	Player(string n, string s, string w)
	{
		name = n;
		strong = s;
		weak = w;
	}

	void print()
	{
		cout << name << endl;
		cout << "Strong Against: " << strong << endl;
		cout << "Weak Against: " << weak << endl;
	}
};
int wins = 0;
int loss = 0;
int ties = 0;
void wincheck(string p1, string p2)
{
	if (p1 == "Knight" && (p2 == "Swordsman" || p2 == "Thief"))
	{
		cout << "You Win!" << endl;
		wins = wins + 1;
		Sleep(250);
		cout << "Wins: "<< wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Knight" && p2 == "Knight")
	{
		cout << "It's a Tie!" << endl;
		ties = ties + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Knight" && (p2 == "Mage" || p2 == "Archer"))
	{
		cout << "You Lose!" << endl;
		loss = loss + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Swordsman" && (p2 == "Mage" || p2 == "Archer"))
	{
		cout << "You Win!" << endl;
		wins = wins + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Swordsman" && p2 == "Swordsman")
	{
		cout << "It's a Tie!" << endl;
		ties = ties + 1; 
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Swordsman" && (p2 == "Knight" || p2 == "Thief"))
	{
		cout << "You Lose!" << endl;
		loss = loss + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Mage" && (p2 == "Thief" || p2 == "Knight"))
	{
		cout << "You Win!" << endl;
		wins = wins + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Mage" && p2 == "Mage")
	{
		cout << "It's a Tie!" << endl;
		ties = ties + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Mage" && (p2 == "Swordsman" || p2 == "Archer"))
	{
		cout << "You Lose!" << endl;
		loss = loss + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Thief" && (p2 == "Archer" || p2 == "Swordsman"))
	{
		cout << "You Win!" << endl;
		wins = wins + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Thief" && p2 == "Thief")
	{
		cout << "It's a Tie!" << endl;
		ties = ties + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Thief" && (p2 == "Knight" || p2 == "Mage"))
	{
		cout << "You Lose!" << endl;
		loss = loss + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Archer" && (p2 == "Knight" || p2 == "Mage"))
	{
		cout << "You Win!" << endl;
		wins = wins + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Archer" && p2 == "Archer")
	{
		cout << "It's a Tie!" << endl;
		ties = ties + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
	if (p1 == "Archer" && (p2 == "Thief" || p2 == "Swordsman"))
	{
		cout << "You Lose!" << endl;
		loss = loss + 1;
		Sleep(250);
		cout << "Wins: " << wins << endl;
		Sleep(250);
		cout << "Losses: " << loss << endl;
		Sleep(250);
		cout << "Ties: " << ties << endl;
	}
}

int main()
{
	string Knight;
	string Swordsman;
	string Mage;
	string Thief;
	string Archer;
	string choice;
	string next;
	string again = "Again";
	string name;
	string oppenent;
	string pick;
	string opp;
	random_device rd;

	cout << "Welcome to Medieval Battle!" << endl;
	while (choice != "Start")
	{
		next = "ui";
		cout << "When you are ready to begin type 'Start'" << endl;
		cout << "To learn more about a character type in the\nnumber that corresponds with thier name:" << endl;
		cout << "Knight 1, Swordsman 2, Mage 3, Thief 4, Archer 5" << endl;
		cout << ">";
		cin >> choice;
		if (choice != "Start")
		{
			while (next != "Back")
			{
				if (choice == "1")
				{
					cout << "--------------------------------------------------" << endl;
					Player Knight("Knight", "Swordsman, Thief", "Archer, Mage");
					Knight.print();
					cout << "To go back type 'Back'" << endl;
					cout << "--------------------------------------------------" << endl;
					cin >> next;
					if (next == "Back")
					{
						system("CLS");
					}
				}
				if (choice == "2")
				{
					cout << "--------------------------------------------------" << endl;
					Player Swordsman("Swordsman", "Mage, Archer", "Knight, Thief");
					Swordsman.print();
					cout << "To go back type 'Back'" << endl;
					cout << "--------------------------------------------------" << endl;
					cin >> next;
					if (next == "Back")
					{
						system("CLS");
					}
				}
				if (choice == "3")
				{
					cout << "--------------------------------------------------" << endl;
					Player Mage("Mage", "Knight, Thief", "Swordsman, Archer");
					Mage.print();
					cout << "To go back type 'Back'" << endl;
					cout << "--------------------------------------------------" << endl;
					cin >> next;
					if (next == "Back")
					{
						system("CLS");
					}
				}
				if (choice == "4")
				{
					cout << "--------------------------------------------------" << endl;
					Player Thief("Thief", "Archer, Swordsman", "Mage, Knight");
					Thief.print();
					cout << "To go back type 'Back'" << endl;
					cout << "--------------------------------------------------" << endl;
					cin >> next;
					if (next == "Back")
					{
						system("CLS");
					}
				}
				if (choice == "5")
				{
					cout << "--------------------------------------------------" << endl;
					Player Archer("Archer", "Knight, Mage", "Thief, Swordsman");
					Archer.print();
					cout << "To go back type 'Back'" << endl;
					cout << "--------------------------------------------------" << endl;
					cin >> next;
					if (next == "Back")
					{
						system("CLS");
					}
				}
			}
		}
	}
	system("CLS");
	cout << "Thou shall now type their name" << endl;
	cout << ">";
	cin >> name;
	Sleep(200);
	cout << "Ah you are the brave and heroic " << name << "!" << endl;
	Sleep(700);
	cout << "Who is thy's mortal enemy?" << endl;
	cout << ">";
	cin >> oppenent;
	Sleep(200);
	cout << "Ahh yes the dreaed, " << oppenent << "!" << endl;
	Sleep(500);
	while (again == "Again")
	{
		cout << oppenent << " Approaches!" << endl;
		Sleep(200);
		cout << "Now is the time to choose a fighter!" << endl;
		Sleep(500);
		cout << "Type in the name of following characters to choose them!" << endl;
		Sleep(300);
		cout << "Knight!" << endl;
		Sleep(100);
		cout << "Swordsman!" << endl;
		Sleep(100);
		cout << "Mage!" << endl;
		Sleep(100);
		cout << "Thief!" << endl;
		Sleep(100);
		cout << "Archer!" << endl;
		Sleep(100);
		cout << ">";
		cin >> pick;
		if (pick == "Knight")
		{
			string pick = "Knight";
			cout << name << " chose the Knight!" << endl;
		}
		else if (pick == "Swordsman")
		{
			string pick = "Swordsman";
			cout << name << " chose the Swordsman!" << endl;
		}
		else if (pick == "Mage")
		{
			string pick = "Mage";
			cout << name << " chose the Mage!" << endl;
		}
		else if (pick == "Thief")
		{
			string pick = "Thief";
			cout << name << " chose the Thief!" << endl;
		}
		else if (pick == "Archer")
		{
			string pick = "Archer";
			cout << name << " chose the Archer!" << endl;
		}
		int computer = rd() % 5 + 1;
		Sleep(250);
		if (computer == 1)
		{
			opp = "Knight";
			cout << oppenent << " chose the Knight!" << endl;
		}
		else if (computer == 2)
		{
			opp = "Swordsman";
			cout << oppenent << " chose the Swordsman!" << endl;
		}
		else if (computer == 3)
		{
			opp = "Mage";
			cout << oppenent << " chose the Mage!" << endl;
		}
		else if (computer == 4)
		{
			opp = "Thief";
			cout << oppenent << " chose the Thief!" << endl;
		}
		else if (computer == 5)
		{
			opp = "Archer";
			cout << oppenent << " chose the Archer!" << endl;
		}
		Sleep(1000);
		wincheck(pick, opp);
		Sleep(500);
		cout << "To play again type 'Again'" << endl;
		cout << ">";
		cin >> again;
		cout << "-----------------------------------" << endl;
	}
}
