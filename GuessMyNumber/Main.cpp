#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
	int choice = 0;
	int number = 60;

	cout << "Welcome to Guess The Number!" << endl;
	cout << endl;

	bool wrongChoice = true;

	while (wrongChoice)
	{
		cout << "Guess a number!" << endl;
		cin >> choice;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (choice <= 60 - 1)
		{
			cout << "Too low. Try again!" << endl;
			bool wrongChoice = false;
		}
		else if (choice >= 60 + 1)
		{
			cout << "Too High! Guess again." << endl;
			bool wrongChoice = false;
		}
		else if (choice == 60)
		{
			cout << "That is corret. Congrats!" << endl;
			bool wrongChoice = false;
			break;
		}
	}

	return 0;
}