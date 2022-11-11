#include "Milk.h"
#include <iostream>
using namespace std;

Milk::Milk() {
	this->stock = 0;
	this->price = 0;
	this->name = "Milk";
	this->category = "Dairy";
	this->unit = "L";
}

Milk::Milk(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Milk";
	this->category = "Dairy";
	this->unit = "L";

}

std::string Milk::getcategory() {
	return this->category;
}

double Milk::getprice() {
	return this->price;
}

std::string Milk::getunit() {
	return this->unit;
}

void Milk::print() const {
	  cout << "Name: " <<this->name<< endl;
	  cout << "Stock: " << this->stock << endl;
	  cout << "Price: " << this->price << "$/"<<this->unit << endl;
}
double Milk::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);


	}
	else {
		cout << "\nThe remaining stock of " << this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
		return 0.0;
	}


}

void Milk::setrprice(double x) {
	this->price = x;
}
void Milk::setstock(double x) {
	this->stock = x;
}


double Milk::getstock() {
	return this->stock;
}

std::string Milk::getname() {
	return this->name;
}

Milk::~Milk() {
	cout << "Deleting class Milk\n";
}