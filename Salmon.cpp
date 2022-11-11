#include "Salmon.h"
#include <iostream>
using namespace std;


Salmon::Salmon() {
	this->stock = 0;
	this->price = 0;
	this->name = "Salmon";
	this->unit = "Kg";
	this->category = "Fish";
}

Salmon::Salmon(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Salmon";
	this->unit = "Kg";
	this->category = "Fish";

}

void Salmon::print() const {
	cout << "Name: " << this->name << endl;
	cout << "Stock: " << this->stock << endl;
	cout << "Price: " << this->price << "$/"<<this->unit << endl;


}

double Salmon::getcost(double x) {

	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);
	}
	else {
		cout << "\nThe remaining stock of " << this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
		return 0.0;
	}
}

double Salmon::getstock() {
	return this->stock;
}

std::string Salmon::getcategory() {
	return this->category;
}

double Salmon::getprice() {
	return this->price;
}

std::string Salmon::getname() {
	return this->name;
}

void Salmon::setrprice(double x) {
	this->price = x;
}
void Salmon::setstock(double x) {
	this->stock = x;
}


std::string Salmon::getunit() {
	return this->unit;
}

Salmon::~Salmon() {
	cout << "Deleting class Salmon\n";

}