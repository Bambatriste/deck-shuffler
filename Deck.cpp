#include "Deck.hpp"

Deck::Deck()
{

	unsigned int i = 0;
	while (i < 52)
	{
		this->cards.push_back(Card(i, i%13));
		i++;
	}
}
Deck::~Deck()
{
}

std::ostream &operator<<(std::ostream &o, Deck const &instance)
{

	unsigned long i = 0;
	while (i < instance.getCards().size())
	{
		o << instance.getCards()[i];
		i++;
	}

	return o;
}

void Deck::randomize()
{
	std::random_device rd;
	std::default_random_engine rng(rd());

	std::cout << "randomizing" << std::endl;
	std::shuffle(this->cards.begin(), this->cards.end(), rng);
	std::cout << *this;

}

std::vector<Card> Deck::getCards()const
{
	return this->cards;
}


/* ************************************************************************** */
