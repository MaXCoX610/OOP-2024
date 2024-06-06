#include<vector>
#include<string>
#include "Article.h"
#include "VideoGame.h"
#include "Apple.h"
#include "Book.h"

using namespace std;

class Shop {
	vector<Article*> items;
public:
	Shop();
	Shop& Add(Article* item);
	int GetTotalPrice();
	int GetQuantity(string type);
	void List();
};
