#include "CustomerOrder.h"
#include <iostream>
using namespace std;
CustomerOrder::CustomerOrder() {

	this->ordernb++;
	this->price = 0.0;
}

int CustomerOrder::getordernb() {
	return this->ordernb;
}

void CustomerOrder::addtoreceipt(string name, double price, double quantity) {

	items.push_back(tuple<string, double, double>(name, price, quantity));
}

void CustomerOrder::printreceipt() {
	cout << "Printing order " << this->ordernb << " :\n";
	cout << "Item" << "\t\t" << "Quantity" << "\t\t" <<  "Price" << endl;

	for (int i = 0; i < this->items.size(); i++) {
		cout << get<0>(items[i]) << "\t\t" << get<2>(items[i]) << "\t\t" << get<1>(items[i]) << endl;

	}
	cout << "\t\t\t\t" << this->price << endl;
}

void CustomerOrder::addprice(double x) {
	this->price += x;
}

CustomerOrder::~CustomerOrder() {
}

int CustomerOrder::ordernb = 0;


