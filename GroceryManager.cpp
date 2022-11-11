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
	this->itemnb = 0;

	for (int i = 0; i < 12; i++) {
		this->selection[i] = nullptr;
	}

	for (int i = 0; i < 25; i++) {
		this->orders[i] = nullptr;
	}
	
}


void GroceryManager::additem(Grocery* that) {
	if (itemnb >= 12) {
		std::cout << "Error array of items is full\n";
		return;
	}
	if (this->selection[this->itemnb] == nullptr) {

		cout << "Adding " << that->getname() << endl;
		this->selection[this->itemnb] = that;
		itemnb++;


	}
	else {
		if (this->search(that->getname()) != -1) {
			cout << "Item already exists\n";
		}

	}
}

void GroceryManager::printallorders() {
	for (int i = 0; i < this->ordernb; i++) {
		this->orders[i]->printreceipt();
		cout << endl;
	}
}

int GroceryManager::search(string x) {
	for (int i = 0; i < 12; i++) {

		if (this->selection[i] != nullptr) {
			if (this->selection[i]->getname() == x) {
				return i;
			}
		}
		else {
			continue;
		}
	
	}
	cout << "\nItem " << x << " is not found\n";
	return -1;
}

void GroceryManager::printorder(int x) {
	for (int i = 0; i < 25; i++) {
		if (orders[i] != nullptr) {
			if (orders[i]->getordernb() == x) {
				orders[i]->printreceipt();
				return;
			}
		
		}
		else {
			continue;
		}
	
	}
	cout << "\nOrder not found\n";
}

bool GroceryManager::realcategory(string x) {
	for (int i = 0; i < 12; i++) {
		if (this->selection[i] != nullptr) {
			if (this->selection[i]->getcategory() == x) {
				return true;
			}
		}
		else { continue; }
	}
	return false;
}

void GroceryManager::checkcategory(string x) {
	if (!this->realcategory(x)) {
		cout << "\nCategory" <<x<<" was not found\n";
	}
	else {
		cout << "\nDisplaying Elements for Category: " << x <<"\n" << "\t" << right << "Price" << endl;
		for (int i = 0; i < 12; i++) {
			if (this->selection[i] != nullptr) {
				if (this->selection[i]->getcategory() == x) {
					cout << this->selection[i]->getname() << "\t" << right << this->selection[i]->getprice() << "$/" << this->selection[i]->getunit() << endl;

				}
			}
			else { continue; }
		}
	
	}
}

bool GroceryManager::purchase(string name, double quantity) {

	//checking if the item is there
	int x = 0;
	double price = 0;
	string unit = "";
	x = search(name);

	if (x == -1) {
		return false;
	}
	else {

		price = this->selection[x]->getcost(quantity);
		unit = this->selection[x]->getunit();
		if (price == 0.0) {
			return false;
		}
		else {
			this->orders[this->ordernb - 1]->addtoreceipt(name, price, quantity,unit);
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
	cout << "\nClass GroceryManager was deleted" << endl;
	for (int i = 0; i < 12; i++) {
		delete this->selection[i];
	}

	for (int i = 0; i < 25; i++) {
		delete this->orders[i];
	}
}

