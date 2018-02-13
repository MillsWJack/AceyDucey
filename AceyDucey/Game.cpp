#include "Game.h"

Game::Game(const int& cash):
	m_PlayerCash(cash)
{
}

void Game::displayInstructions()
{
	cout << "\n\t\tWelcome to Acey Ducey.\n\n"
		<< "I will draw 2 random playing cards.\n"
		<< "Bet based on whether you think the next one will be between them.\n"
		<< "It's Game Over when you run out of money.\n\n";
}

unsigned int Game::askNumber(const string& prompt)
{
	unsigned int response;

	do
	{
		cout << prompt << "[0 - " << m_PlayerCash << "]: \x9c";
		cin >> response;
	} while (response > m_PlayerCash || response < 0);

	return response;
}

bool Game::askYesNo(const string& prompt)
{
	bool response;
	do
	{
		cout << prompt;
		cin >> response;
	} while (response != 1 && response != 0);

	return response;
}