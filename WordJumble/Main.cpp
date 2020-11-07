#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <array>

using namespace std;

int main(int argc, char** argv)
{
	const int MAX_WORDS = 5;
	array<string, MAX_WORDS> word{ "splash","jump","kitten","ocean","chair" };

	srand(time(0));
	string randWord = word [rand() % MAX_WORDS];
	string jumble = randWord;
	int wordLength = jumble.size();

	for (int i = 0; i < wordLength; i++)
	{
		int letter1 = rand() % wordLength;
		int letter2 = rand() % wordLength;
		char tempLetter;
		tempLetter = jumble[letter1];
		jumble[letter1] = jumble[letter2];
		jumble[letter2] = tempLetter;
	}

	cout << jumble << endl;
	
	//Cheater Cheater Method
	/*string jumble = randWord;
	random_shuffle(jumble.begin(), jumble.end());
	cout << jumble << endl;*/

	bool wrongWord = true;
	string guess = "";

	while (wrongWord)
	{
		cout << "Un-jumble the word!" << endl;
		cin >> guess;

		if (guess == randWord)
		{
			cout << "Correct!" << endl;
			break;
		}
		else if (guess != randWord)
		{
			cout << "That's not it. Try again!" << endl;
			wrongWord = true;
		}
	}

	return 0;
}