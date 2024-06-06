#pragma once
#include "Article.h"

class Apple : public Article {
	string type = "Apple", origin;
	int price;
	int quantity;
public:
	Apple(int price, int quantity, string origin);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};
