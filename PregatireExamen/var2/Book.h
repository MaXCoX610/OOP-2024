#pragma once
#include "Article.h"

class Book : public Article {
	string type = "Book", title, autor;
	int price;
	int quantity;
public:
	Book(int price, int quantity, string title, string autor);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};
