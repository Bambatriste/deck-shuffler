#ifndef DECK_HPP
# define DECK_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
#include <random>
#include <iterator>

#include "Card.hpp"

class Deck
{
	public:
		Deck();
		~Deck();
		void randomize();
		void display();
		std::vector<Card> getCards()const;

	private:
		std::vector<Card> cards;

};

#endif /* ************************************************************* DECK_HPP */
