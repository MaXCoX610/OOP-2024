#pragma once
#include<iostream>
#include <string>
#include <vector>
#include <functional>

using namespace std;

class Visitor {
public:
	Visit(Book* book);
	Visit(Pen* pen);
};


//varianta asta e cea mai mare bucata de bullshit