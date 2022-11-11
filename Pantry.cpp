#include "Pantry.h"
#include <iostream>
using namespace std;

Pantry::Pantry() {
	this->name = "Pantry";
}

void Pantry::print() const  {
	cout << "Pantry Section" << endl;

}

std::string Pantry::getcategory() {
	return "";
}

double Pantry::getprice() {
	return 0;
}

std::string Pantry::getunit() {
	return "";
}

 double Pantry::getcost(double x) {
	cout << "Please make your selection from the following categories: \n";
	cout << "Milk\nCheese\nYogurt\nPantry\n";
	return 0;
 }

double Pantry::getstock() {
	return 0.0;
}

std::string Pantry::getname() {
	return this->name;
}
Pantry::~Pantry() {
}