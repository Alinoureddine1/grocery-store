#pragma once
#include "Grocery.h"
#include "CustomerOrder.h"
#include <string>
#include <tuple>
#include <vector>
#include <string>
using namespace std;
class GroceryManager {

private:
	Grocery* selection[12];
	CustomerOrder* orders[25];
	int ordernb;
	int itemnb;

public:
	GroceryManager();
	void neworder();
	void printallorders();
	void printorder(int);
	int search(string);
	void additem(Grocery*);
	bool purchase(string, double);
	bool realcategory(string);
	void checkcategory(string);
	~GroceryManager();
	








};