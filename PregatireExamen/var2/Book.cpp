#include "Book.h"

Book::Book(int price, int quantity, string title, string autor)
{
	this->price = price;
	this->quantity = quantity;
	this->title = title;
	this->autor = autor;
}

int Book::GetQuantity()
{
	return quantity;
}

int Book::GetPrice()
{
	return price;
}

void Book::Print()
{
	cout << type << ' ' << "(Title=" << title << ", Author=" << autor << ") Price=" << price << " Quantity=" << quantity << endl;
}

string Book::GetType()
{
	return type;
}
