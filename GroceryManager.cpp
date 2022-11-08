#include "GroceryManager.h"

#include "Beef.h"
#include "Chicken.h"
#include "Haddock.h"
#include "SeaBass.h"
#include "Salmon.h"
#include <iostream>
#include <iomanip>

using namespace std;

GroceryManager::GroceryManager() {
	
	this->ordernb = 0;

	this->selection[0] = new Beef();
	this->selection[0] = new Chicken();
	this->selection[0] = new Haddock();
	this->selection[0] = new SeaBass();
	this->selection[0] = new Salmon();
	

	for (int i = 0; i < 26; i++) {
		this->orders[i] = nullptr;
	}
	
}

int GroceryManager::search(string x) {
	for (int i = 0; i < 15; i++) {
		if (this->selection[i]->getname() == x) {
			cout << "Item found";
			return i;
		}
	
	}
	cout << "Item " << x << " is not found\n";
	return -1;
}

bool GroceryManager::realcategory(string x) {
	for (int i = 0; i < 15; i++) {
		if (this->selection[i]->getcategory() == x) {
			return true;
		}

	}
	return false;
}

void GroceryManager::checkcatgory(string x) {
	if (!this->realcategory(x)) {
		cout << "This category was not found\n";
	}
	else {
		cout << "Displaying Elements for Category: " << x <<"\t" << right << "Price" << endl;
		for (int i = 0; i < 15; i++) {
			if (this->selection[i]->getcategory() == x) {
				cout << this->selection[i]->getname() << "\t" << right << this->selection[i]->getprice() << "$/" << this->selection[i]->getunit() << endl;
			
			}
		
		}
	
	}
}

bool GroceryManager::purchase(string name, double quantity) {

	//checking if the item is there
	int x = 0;
	double price = 0;
	x = search(name);

	if (x == -1) {
		return false;
	}
	else {

		price = this->selection[x]->getcost(quantity);

		if (price == 0.0) {
			return false;
		}
		else {
			this->orders[this->ordernb - 1]->addtoreceipt(name, price, quantity);
			this->orders[this->ordernb - 1]->addprice(price);
			return true;
		}
	}

}

void GroceryManager::neworder() {
	this->orders[this->ordernb] = new CustomerOrder();
	this->ordernb++;
}

GroceryManager::~GroceryManager() {
}

