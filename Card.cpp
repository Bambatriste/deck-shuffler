#include "Card.hpp"

Card::Card(void)
:
_id(0),
_value(0)
{
}

Card::Card(unsigned int id, unsigned int value)
:
_id(id),
_value(value)
{
}

Card::~Card()
{
}

std::ostream &operator<<(std::ostream &o, Card const &i)
{
	o << i.getId();
	return o;
}

unsigned int Card::getId(void)const
{
	return this->_id;
}

unsigned int Card::getValue(void)const
{
	return this->_value;
}


/* ************************************************************************** */
