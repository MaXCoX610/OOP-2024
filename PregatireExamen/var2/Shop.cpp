#include "Shop.h"

Shop::Shop()
{
}

Shop& Shop::Add(Article* item)
{
	items.push_back(item);
	return *this;
}

int Shop::GetTotalPrice()
{
	int s = 0;
	for (auto it : items)
		s += (it->GetPrice() * it->GetQuantity());
	return s;
}

int Shop::GetQuantity(string type)
{
	int k = 0;
	for (auto it : items)
		if(it->GetType() == type)
			k += it->GetQuantity();
	return k;
}

void Shop::List()
{
	for (auto it : items)
		it->Print();
}
