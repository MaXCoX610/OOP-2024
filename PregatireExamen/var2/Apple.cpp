#include "Apple.h"

Apple::Apple(int price, int quantity, string origin)
{
	this->price = price;
	this->quantity = quantity;
	this->origin = origin;
}

string Apple::GetType()
{
	return type;
}

int Apple::GetQuantity()
{
	return quantity;
}

int Apple::GetPrice()
{
	return price;
}

void Apple::Print()
{
	cout << type << ' ' << "(from=" << origin << ") Price=" << price << " Quantity=" << quantity << endl;
}
