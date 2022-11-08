#include "SeaBass.h"
#include <iostream>
using namespace std;

SeaBass::SeaBass() {
	this->stock = 40;
	this->name = "SeaBass";
	this->unit = "Kg";
	this->category = "Fish";
}

void SeaBass::print() const {
	cout << "Name: " <<this->name<< endl;
	cout << "Stock: " << this->stock << endl;
	cout << "Price: " << this->price << "$/" <<this->unit<< endl;

}

std::string SeaBass::getcategory() {
	return this->category;
}

std::string SeaBass::getunit() {
	return this->unit;
}

double SeaBass::getprice() {
	return this->price;
}


double SeaBass::getcost(double x) {

	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);
	}
	else {
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
		return 0.0;
	}
}

double SeaBass::getstock() {
	return this->stock;
}

std::string SeaBass::getname() {
	return this->name;
}

SeaBass::~SeaBass() {}