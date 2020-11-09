#include <iostream>
#include "Tamagochi.h"
#include <string>

using namespace std;

int main(int argc, char* argv)
{
	Tamagochi Winston = Tamagochi(50, 50, 100); 

	cout << "To feed Winston, type: feed." << endl;
	cout << "To play with Winston, type: play." << endl;
	cout << "To talk to Winston, type: talk." << endl;

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
			cout << "You feed Winston." << endl;
			Winston.eat();
		}
		else if (input == "play")
		{
			cout << "You play with Winston." << endl;
			Winston.play();
		}
		else if (input == "talk")
		{
			cout << "You talk with Winston." << endl;
			Winston.talk();
		}
	}
	
	return 0;
}