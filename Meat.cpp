#include "Meat.h"
#include <iostream>
using namespace std;

Meat::Meat() {
	this->name = "Meat";
}

void Meat::print() const  {
	cout << "Meat Section includes: " << endl;
	cout << "Beef\nChicken\nFish"<< endl;
}

std::string Meat::getcategory() {
	return "";
}

double Meat::getprice() {
	return 0;
}

std::string Meat::getunit() {
	return "";
}

double Meat::getcost(double x) {
	cout << "Please make your selection from the following categories: \n";
	cout << "Beef\nChicken\nHaddock\nSalmon\nSeaBass\n";
	return 0;
}

double Meat::getstock() {
	return 0.0;
}

std::string Meat::getname() {
	return this->name;
}
Meat::~Meat() {
}