//Acey Ducey
//Dealer deals 2 cards, player bets whether they think the next drawn card will be between the previous two

//Psuedo Code
/*
	Welcome Player and Display Instructions
	While the player has money and hasn't quit
		Shuffle deck
		Draw two random cards
		Ask player for bet
		If next drawn card is between the two random ones
			congratulate player and give player winnings
		Otherwise
			take money from player
		Ask player if he wants to play again
		
	Display player's money.
*/

#include <iostream>
#include <algorithm>
#include <ctime>

#include "Game.h"
#include "Deck.h"

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	Game game;
	Deck deck;

	game.displayInstructions();

	while (game.getPlayerCash() > 0)
	{
		cout << "\nCards are:\n";
		int firstCard = deck.shuffleAndGetCard();
		int secondCard = deck.shuffleAndGetCard();
		int thirdCard = deck.shuffleAndGetCard();

		if (firstCard < secondCard)
		{
			deck.displayCard(firstCard);
			deck.displayCard(secondCard);
		}
		else
		{
			deck.displayCard(secondCard);
			deck.displayCard(firstCard);
		}

		int bet = game.askNumber("\nMake a bet ");
		deck.displayCard(thirdCard);
		if (deck.evaluateCards(firstCard, secondCard, thirdCard))
		{
			cout << "Good job! Awarding you \x9c" << bet * 2 << endl;
		}
		else
		{
			cout << "Unlucky, taking \x9c" << bet << endl;
			game.setPlayerCash(bet);
		}
	}

	cout << "\nGame Over! You left with: \x9c" << game.getPlayerCash() << endl;
	return 0;
}