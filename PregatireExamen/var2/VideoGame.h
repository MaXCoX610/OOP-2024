#pragma once
#include "Article.h"

class VideoGame : public Article {
	string type = "VideoGame", name, platform;
	int price;
	int quantity;
public:
	VideoGame(int price, int quantity, string platform, string name);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};
