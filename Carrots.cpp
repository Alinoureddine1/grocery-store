#include "Carrots.h"
#include <iostream>
using namespace std;

Carrots::Carrots() {
	this->stock = 0;
	this->price = 0;
	this->name = "Carrots";
	this->category = "VegetablesFruits";
	this->unit = "Kg";
}

Carrots::Carrots(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Carrots";
	this->category = "VegetablesFruits";
	this->unit = "Kg";

}

std::string Carrots::getcategory() {
	return this->category;
}

void Carrots::setrprice(double x) {
	this->price = x;
}
void Carrots::setstock(double x) {
	this->stock = x;
}

double Carrots::getprice() {
	return this->price;
}

std::string Carrots::getunit() {
	return this->unit;
}

void Carrots::print() const {
	cout << "Name: " << this->name << endl;
	cout << "Stock: " << this->stock << endl;
	cout << "Price: " << this->price << "$/" << this->unit << endl;
}
double Carrots::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);


	}
	else {
		cout << "\nThe remaining stock of " << this->getname() << " is " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n\n";
		return 0.0;
	}


}

double Carrots::getstock() {
	return this->stock;
}

std::string Carrots::getname() {
	return this->name;
}

Carrots::~Carrots() {
	cout << "Deleting class Carrots\n";
}