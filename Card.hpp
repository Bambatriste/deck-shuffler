#ifndef CARD_HPP
# define CARD_HPP

# include <iostream>
# include <string>

class Card
{
	public:
	
		Card();
		Card(unsigned int id, unsigned int value);
		~Card();
		unsigned int getId(void)const;
		unsigned int getValue(void)const;

	private:
		unsigned int _id;
		unsigned int _value;
};

std::ostream &operator<<(std::ostream &o, Card const &i);

#endif /* ************************************************************* CARD_HPP */
