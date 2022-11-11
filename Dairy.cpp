#include "Dairy.h"
#include <iostream>
using namespace std;

Dairy::Dairy() {
	this->name = "Dairy";
}

void Dairy::print() const  {
	cout << "Dairy Section includes: " << endl;
	cout << "Milk\nCheese\nYogurt\nPantry"<< endl;
}

std::string Dairy::getcategory() {
	return "";
}

double Dairy::getprice() {
	return 0;
}

std::string Dairy::getunit() {
	return "";
}

double Dairy::getcost(double x) {
	cout << "Please make your selection from the following categories: \n";
	cout << "Milk\nCheese\nYogurt\nPantry\n";
	return 0;
}

double Dairy::getstock() {
	return 0.0;
}

std::string Dairy::getname() {
	return this->name;
}
Dairy::~Dairy() {
}