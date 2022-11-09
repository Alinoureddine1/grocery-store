#include "Yogurt.h"
#include <iostream>
using namespace std;

Yogurt::Yogurt() {
	this->stock = 20;
	this->name = "Yogurt";
	this->category = "Dairy";
	this->unit = "kg";
}

std::string Yogurt::getcategory() {
	return this->category;
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
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
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
}