#include "Cheese.h"
#include <iostream>
using namespace std;

Cheese::Cheese() {
	this->stock = 30;
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
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
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
}