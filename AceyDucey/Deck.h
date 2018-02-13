#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Deck
{
public:
	Deck();

	int shuffleAndGetCard();
	int getCard() const;
	void displayCard(int card) const;
	bool evaluateCards(int firstCard, int secondCard, int thirdCard);

	//Debug
	void displayDeck();
private:
	vector<int> m_Deck;
};

