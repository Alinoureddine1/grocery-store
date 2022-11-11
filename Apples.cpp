#include "Apples.h"
#include <iostream>
using namespace std;

Apples::Apples() {
	this->stock = 0;
	this->price = 0;
	this->name = "Apples";
	this->category = "VegetablesFruits";
	this->unit = "Kg";
}

Apples::Apples(double x, double y) {
	this->stock = x;
	this->price = y;
	this->name = "Apples";
	this->category = "VegetablesFruits";
	this->unit = "Kg";

}

std::string Apples::getcategory() {
	return this->category;
}

void Apples::setrprice(double x) {
	this->price = x;
}
void Apples::setstock(double x) {
	this->stock = x;
}

double Apples::getprice() {
	return this->price;
}

std::string Apples::getunit() {
	return this->unit;
}

void Apples::print() const {
	cout << "Name: " << this->name << endl;
	cout << "Stock: " << this->stock << endl;
	cout << "Price: " << this->price << "$/" << this->unit << endl;
}
double Apples::getcost(double x) {
	if ((this->stock - x) > 0) {
		this->stock -= x;
		return (x * this->price);


	}
	else {
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
		return 0.0;
	}


}

double Apples::getstock() {
	return this->stock;
}

std::string Apples::getname() {
	return this->name;
}

Apples::~Apples() {
	cout << "Deleting class Apples\n";
}