#include "Salmon.h"
#include <iostream>
using namespace std;


Salmon::Salmon() {
	this->stock = 50;
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
		cout << "The remaining stock is: " << this->stock << " " << this->unit << "s Please choose an appropriate ammount.\n";
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

std::string Salmon::getunit() {
	return this->unit;
}

Salmon::~Salmon() {

}