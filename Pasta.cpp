#include "Pasta.h"
#include <iostream>
using namespace std;

Pasta::Pasta() {
	this->stock = 0;
	this->price = 0;
	this->name = "Pasta";
	this->category = "Pantry";
	this->unit = "kg";
}

Pasta::Pasta(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Pasta";
	this->category = "Pantry";
	this->unit = "kg";

}

std::string Pasta::getcategory() {
	return this->category;
}

void Pasta::setrprice(double x) {
	this->price = x;
}
void Pasta::setstock(double x) {
	this->stock = x;
}

double Pasta::getprice() {
	return this->price;
}

std::string Pasta::getunit() {
	return this->unit;
}

void Pasta::print() const {
	cout << "Name: " << this->name << endl;
	cout << "Stock: " << this->stock << endl;
	cout << "Price: " << this->price << "$/" << this->unit << endl;
}
double Pasta::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);


	}
	else {
		cout << "\nThe remaining stock of " << this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
		return 0.0;
	}


}

double Pasta::getstock() {
	return this->stock;
}

std::string Pasta::getname() {
	return this->name;
}

Pasta::~Pasta() {
	cout << "Deleting class Pasta\n";
}