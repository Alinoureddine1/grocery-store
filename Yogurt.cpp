#include "Yogurt.h"
#include <iostream>
using namespace std;

Yogurt::Yogurt() {
	this->stock = 0;
	this->price = 0;
	this->name = "Yogurt";
	this->category = "Dairy";
	this->unit = "kg";
}

Yogurt::Yogurt(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Yogurt";
	this->category = "Dairy";
	this->unit = "kg";

}

std::string Yogurt::getcategory() {
	return this->category;
}

void Yogurt::setrprice(double x) {
	this->price = x;
}
void Yogurt::setstock(double x) {
	this->stock = x;
}


double Yogurt::getprice() {
	return this->price;
}

std::string Yogurt::getunit() {
	return this->unit;
}

void Yogurt::print() const {
	  cout << "Name: " <<this->name<< endl;
	  cout << "Stock: " << this->stock << endl;
	  cout << "Price: " << this->price << "$/"<<this->unit << endl;
}
double Yogurt::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);


	}
	else {
		cout << "\nThe remaining stock of " << this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
		return 0.0;
	}


}

double Yogurt::getstock() {
	return this->stock;
}

std::string Yogurt::getname() {
	return this->name;
}

Yogurt::~Yogurt() {
	cout << "Deleting class Yogurt\n";
}