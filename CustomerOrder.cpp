#include "CustomerOrder.h"
#include <iostream>
#include <iomanip>
using namespace std;

CustomerOrder::CustomerOrder() {

	this->ordernbvar++;
	this->ordernb = this->ordernbvar;
	this->price = 0.0;
}

int CustomerOrder::getordernb() {
	return this->ordernb;
}

void CustomerOrder::addtoreceipt(string name, double price, double quantity,string unit) {

	items.push_back(tuple<string, double, double,string>(name, price, quantity,unit));
}

void CustomerOrder::printreceipt() {
	cout << "Printing order " << this->ordernb << " :\n";
	cout << "Item" << "              " << "Quantity" << "                 "  << "Price($)" << endl;
	for (int i = 0; i < this->items.size(); i++) {
		cout << setw(18) <<left << get<0>(items[i]) <<setw(3)<<left<<  get<2>(items[i]) <<setw(22)<<left <<  " " + get<3>(items[i])  <<right<< get<1>(items[i]) << endl;

	}
	cout << "------------------------------------------------------------" << endl;
	cout <<"Total"<< "\t\t\t\t\t   $" << this->price << endl;
}

void CustomerOrder::addprice(double x) {
	this->price += x;
}

CustomerOrder::~CustomerOrder() {
	cout << "Deleting Customer order number " << this->ordernb << endl;
}

int CustomerOrder::ordernbvar = 0;


