#include "Haddock.h"
#include <iostream>
using namespace std;

Haddock::Haddock() {
	this->stock = 0;
	this->price = 0;
	this->name = "Haddock";
	this->unit = "Kg";
	this->category = "Fish";
}

Haddock::Haddock(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Haddock";
	this->unit = "Kg";
	this->category = "Fish";

}

double Haddock::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);
	}
	else {
		cout << "\nThe remaining stock of " << this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
		return 0.0;
	}
}
void Haddock::print() const {
	cout << "Name: " <<this->name<< endl;
	cout << "Stock: " << this->stock << endl;
	cout << "Price: " << this->price << "$/" <<this->unit<< endl;
}

double Haddock::getstock() {
	return this->stock;
}

double Haddock::getprice() {
	return this->price;
}

std::string Haddock::getunit() {
	return this->unit;
}

void Haddock::setrprice(double x) {
	this->price = x;
}
void Haddock::setstock(double x) {
	this->stock = x;
}

std::string Haddock::getcategory() {
	return this->category;
}

std::string Haddock::getname() {
	return this->name;
}

Haddock::~Haddock() {
	cout << "Deleting class Haddock\n";
}