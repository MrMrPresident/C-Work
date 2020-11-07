#include <iostream>
#include "Tamagochi.h"
#include <string>

using namespace std;

int main(int argc, char* argv)
{
	Tamagochi Dave = Tamagochi(50, 50, 100); 

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
		}
		else if (input == "play")
		{
			cout << "play" << endl;
		}
		else if (input == "talk")
		{
			cout << "talk" << endl;
		}

	}
	
	return 0;
}