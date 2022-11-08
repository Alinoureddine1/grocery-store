#include "Beef.h"
#include <iostream>
using namespace std;

Beef::Beef() {
	this->stock = 100;
	this->name = "Beef";
	this->category = "Meat";
	this->unit = "Kg";
}

std::string Beef::getcategory() {
	return this->category;
}

double Beef::getprice() {
	return this->price;
}

std::string Beef::getunit() {
	return this->unit;
}

void Beef::print() const {
	  cout << "Name: " <<this->name<< endl;
	  cout << "Stock: " << this->stock << endl;
	  cout << "Price: " << this->price << "$/"<<this->unit << endl;
}
double Beef::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);
	
	
	}
	else {
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
		return 0.0;
	}
	

}

double Beef::getstock() {
	return this->stock;
}

std::string Beef::getname() {
	return this->name;
}

Beef::~Beef() {
}