#pragma once

#include <string>
#include <iostream>

using namespace std;

class Game
{
public:
	Game(const int& cash = 100);
	void displayInstructions();
	unsigned int askNumber(const string& prompt);
	bool askYesNo(const string& prompt);
	inline int getPlayerCash() const { return m_PlayerCash; }
	inline void setPlayerCash(int num) { m_PlayerCash -= num; }

private:
	unsigned int m_PlayerCash;
	bool m_IsPlaying;

};

