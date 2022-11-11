#include "Chicken.h"
#include <iostream>
using namespace std;

Chicken::Chicken() {
	this->stock = 0;
	this->price = 0;
	this->name = "Chicken";
	this->unit = "Chicken";
	this->category = "Meat";
}

Chicken::Chicken(double x, double y) {
	this->stock = x;
	this->price = y;
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
		cout << "\nThe remaining stock of " << this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
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

void Chicken::setrprice(double x) {
	this->price = x;
}
void Chicken::setstock(double x) {
	this->stock = x;
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
	cout << "Deleting class Chicken\n";
}