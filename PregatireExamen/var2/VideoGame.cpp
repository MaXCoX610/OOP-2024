#include "VideoGame.h"

VideoGame::VideoGame(int price, int quantity, string platform, string name)
{
	this->price = price;
	this->quantity = quantity;
	this->platform = platform;
	this->name = name;
}

string VideoGame::GetType()
{
	return type;
}

int VideoGame::GetQuantity()
{
	return quantity;
}

int VideoGame::GetPrice()
{
	return price;
}

void VideoGame::Print()
{
	cout << type << ' ' << "(Platform=" << platform << ", Name=" << name << ") Price=" << price << " Quantity=" << quantity << endl;
}
