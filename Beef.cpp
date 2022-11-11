#include "Beef.h"
#include <iostream>
using namespace std;

Beef::Beef() {
	this->stock = 0;
	this->price = 0;
	this->name = "Beef";
	this->category = "Meat";
	this->unit = "Kg";
}
//          stock    price 
Beef::Beef(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Beef";
	this->category = "Meat";
	this->unit = "Kg";

}

std::string Beef::getcategory() {
	return this->category;
}

void Beef::setrprice(double x) {
	this->price = x;
}
void Beef::setstock(double x) { 
	this->stock = x;
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
		cout << "\nThe remaining stock of "<< this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
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
	cout << "Deleting class Beef\n";
}