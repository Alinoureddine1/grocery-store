#include "Chicken.h"
#include <iostream>
using namespace std;

Chicken::Chicken() {
	this->stock = 200;
	this->name = "Chicken";
	this->unit = "Chicken";
	this->category = "Meat";
}

double Chicken::getcost(double x) {

	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);
	}
	else {
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
		return 0.0;
	}
}

double Chicken::getstock() {
	return this->stock;
}

std::string Chicken::getname() {
	return this->name;
}

void Chicken::print() const {
	cout << "Name: "<<this->name << endl;
	cout << "Stock: " << this->stock << endl;
	cout << "Price: " << this->price << "$/" <<this->unit<< endl;

}

double Chicken::getprice() {
	return this->price;
}

std::string Chicken::getunit() {
	return this->unit;
}

std::string Chicken::getcategory() {
	return this->category;
}

Chicken::~Chicken() {
}