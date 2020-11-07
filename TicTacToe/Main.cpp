#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <array>

using namespace std;

int PlayerTurn();
int AiTurn();
int WinCheck();

int pturn = 0;

char s[9] = { '1','2','3','4','5','6','7','8','9' };

//Win Conditions
char winConditions[8][3] =
{
{s[0],s[1],s[2]},
{s[3],s[4],s[5]},
{s[6],s[7],s[8]},
{s[0],s[3],s[6]},
{s[1],s[4],s[7]},
{s[2],s[5],s[8]},
{s[0],s[4],s[8]},
{s[2],s[4],s[6]},
};

int main(int argc, char** argv)
{	
	bool p1Winner = false;
	bool p2Winner = false;
	bool tie = false;

	cout << "Welcome to TicTacToe! Be the first to get 3 in a row." << endl;

	//Coin Toss
	srand(time(0));
	int coin = (rand() % 2) + 1;

	if (coin == 1)
	{
		pturn = 1;
		cout << "Player 1 goes first!" << endl;
	}
	else if (coin == 2)
	{
		pturn = 2;
		cout << "Player 2 goes first!" << endl;
	}

	//Gameplay loop
	while (!(p1Winner == true || p2Winner == true || tie == true))
	{

		//Board display
		cout << " " << s[0] << " " << "|" << " " << s[1] << " " << "|" << " " << s[2] << " " << endl;
		cout << "---" << "|" << "---" << "|" << "---" << endl;
		cout << " " << s[3] << " " << "|" << " " << s[4] << " " << "|" << " " << s[5] << " " << endl;
		cout << "---" << "|" << "---" << "|" << "---" << endl;
		cout << " " << s[6] << " " << "|" << " " << s[7] << " " << "|" << " " << s[8] << " " << endl;



		//Turn Switcher
		if (pturn == 1) 
		{
			PlayerTurn();
		}
		else if (pturn == 2)
		{
			AiTurn();
		}

		
	}

	return 0;
}

int PlayerTurn()
{
	int input1 = 0;
	char token = 'X';
	cout << "Player 1's turn." << endl;
	cout << "Enter a number in accordance to the slot you would like to fill." << endl;
	while (input1 == 0)
	{
		cin >> input1;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (input1 >= 0)
		{
			token = s[input1];
			WinCheck();
			break;
		}
	}
	
	pturn = 2;
}

int AiTurn()
{
	int input2 = 0;
	char token = 'O';
	cout << "Player 2's turn." << endl;

	while (input2 == 0)
	{
		cin >> input2;
		if (input2 >= 0)
		{
			token = s[input2];
			WinCheck();
			break;
		}
	}

	pturn = 1;
}

int WinCheck()
{
	int winCountX = 0;
	int winCountO = 0;
	int emptyCount = 0;

	for (int i = 0; i < 8; i++)
	{
		if (winCountO || winCountX != 3)
		{
			winCountO = 0;
			winCountX = 0;
			emptyCount = 0;
		}
		else if (winCountO == 3)
		{
			cout << "Player 2 wins!" << endl;
		}
		else if (winCountX == 3)
		{
			cout << "Player 1 wins!" << endl;
		}

		for (int u = 0; u < 3; u++)
		{
			if (winConditions[i][u] == 'X')
			{
				winCountX += 1;
			}
			else if (winConditions[i][u] == 'O')
			{
				winCountO += 1;
			}
			else if (winConditions[i][u] == winConditions[i][u])
			{
				emptyCount += 1;
			}

		}

	}
}


