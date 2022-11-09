#include "Eggs.h"
#include <iostream>
using namespace std;

Eggs::Eggs() {
	this->stock = 40;
	this->name = "Eggs";
	this->category = "Dairy";
	this->unit = "dozen";
}

std::string Eggs::getcategory() {
	return this->category;
}

double Eggs::getprice() {
	return this->price;
}

std::string Eggs::getunit() {
	return this->unit;
}

void Eggs::print() const {
	  cout << "Name: " <<this->name<< endl;
	  cout << "Stock: " << this->stock << endl;
	  cout << "Price: " << this->price << "$/"<<this->unit << endl;
}
double Eggs::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);


	}
	else {
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
		return 0.0;
	}


}

double Eggs::getstock() {
	return this->stock;
}

std::string Eggs::getname() {
	return this->name;
}

Eggs::~Eggs() {
}