#pragma once

class Tamagochi
{
public:	
	Tamagochi(int hunger, int boredem, int mood);
	void eat();
	void play();
	void talk();

private:
	int getMood();
	void setMood();

	void timePass();
	int hunger;
	int boredem;
	int mood;
};
