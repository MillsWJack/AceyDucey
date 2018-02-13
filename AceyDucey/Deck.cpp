#include "Deck.h"

Deck::Deck()
{
	for (int i = 1; i <= 13; i++)
	{
		m_Deck.push_back(i);
	}
}

int Deck::shuffleAndGetCard()
{
	random_shuffle(m_Deck.begin(), m_Deck.end());
	int card = getCard();

	return card;
}

int Deck::getCard() const
{
	return m_Deck[0];
}

void Deck::displayCard(int card) const
{
	switch (card)
	{
	case 1:
		cout << "ACE";
		break;
	case 11:
		cout << "JACK";
		break;
	case 12:
		cout << "KING";
		break;
	case 13:
		cout << "QUEEN";
		break;
	default:
		cout << card;
		break;
	}

	cout << endl;
}

bool Deck::evaluateCards(int firstCard, int secondCard, int thirdCard)
{
	if (thirdCard > firstCard && thirdCard < secondCard ||
		thirdCard > secondCard && thirdCard < firstCard)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Debug
void Deck::displayDeck()
{
	for (vector<int>::const_iterator iter = m_Deck.begin(); iter != m_Deck.end(); ++iter)
	{
		switch (*iter)
		{
		case 1:
			cout << "A";
			break;
		case 11:
			cout << "J";
			break;
		case 12:
			cout << "K";
			break;
		case 13:
			cout << "Q";
			break;
		default:
			cout << *iter;
			break;
		}

		cout << endl;
	}
}
