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
	Grocery* selection[15];
	CustomerOrder* orders[25];
	int ordernb;

public:
	GroceryManager();
	void neworder();
	void printallorders();
	int search(string);
	bool purchase(string, double);
	bool realcategory(string);
	void checkcatgory(string);
	~GroceryManager();
	








};