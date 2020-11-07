#include <iostream>
#include "Tamagochi.h"
#include <string>

using namespace std;

int main(int argc, char* argv)
{
	Tamagochi Dave = Tamagochi(50, 50, 100); 

	cout << "To feed Dave, type: feed." << endl;
	cout << "To play with Dave, type: play." << endl;
	cout << "To talk to Dave, type: talk." << endl;

	bool quit = false;
	string input = " ";

	while (!quit)
	{		
		cin >> input;


		if (input == "quit")
		{
			cout << "quit" << endl;
		}
		else if (input == "feed")
		{
			cout << "feed" << endl;
			Tamagochi::eat;
		}
		else if (input == "play")
		{
			cout << "play" << endl;
			Tamagochi::play;
		}
		else if (input == "talk")
		{
			cout << "talk" << endl;
			Tamagochi::talk;
		}
	}
	
	return 0;
}