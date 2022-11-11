#include "Cheese.h"
#include <iostream>
using namespace std;

Cheese::Cheese() {
	this->stock = 0;
	this->price = 0;
	this->name = "Cheese";
	this->category = "Dairy";
	this->unit = "kg";
}


Cheese::Cheese(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Cheese";
	this->category = "Dairy";
	this->unit = "kg";

}

std::string Cheese::getcategory() {
	return this->category;
}

double Cheese::getprice() {
	return this->price;
}

void Cheese::setrprice(double x) {
	this->price = x;
}
void Cheese::setstock(double x) {
	this->stock = x;
}

std::string Cheese::getunit() {
	return this->unit;
}

void Cheese::print() const {
	  cout << "Name: " <<this->name<< endl;
	  cout << "Stock: " << this->stock << endl;
	  cout << "Price: " << this->price << "$/"<<this->unit << endl;
}
double Cheese::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);


	}
	else {
		cout << "\nThe remaining stock of " << this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
		return 0.0;
	}


}

double Cheese::getstock() {
	return this->stock;
}

std::string Cheese::getname() {
	return this->name;
}

Cheese::~Cheese() {
	cout << "Deleting class Cheese\n";
}