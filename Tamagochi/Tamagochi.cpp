#include <iostream>
#include "Tamagochi.h"

Tamagochi::Tamagochi(int tHunger, int tBoredem, int tMood)
	:hunger(tHunger), boredem(tBoredem), mood(tMood)
{
}

void Tamagochi::eat()
{
	hunger += 2;
	timePass();
}

void Tamagochi::play()
{
	boredem += 2;
	timePass();
}

void Tamagochi::talk()
{
	boredem += 2;
	timePass();
}

int Tamagochi::getMood()
{
	return mood;
}

void Tamagochi::setMood()
{
	mood = hunger + boredem;
}

void Tamagochi::timePass()
{
	hunger -= 1;
	boredem -= 1;
}