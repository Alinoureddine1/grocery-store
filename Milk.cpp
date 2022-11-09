#include "Milk.h"
#include <iostream>
using namespace std;

Milk::Milk() {
	this->stock = 200;
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
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
		return 0.0;
	}


}

double Milk::getstock() {
	return this->stock;
}

std::string Milk::getname() {
	return this->name;
}

Milk::~Milk() {
}