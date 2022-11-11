#include "VegetablesFruits.h"
#include <iostream>
using namespace std;

VegetablesFruits::VegetablesFruits() {
	this->name = "VegetablesFruits";
}

void VegetablesFruits::print() const  {
	cout << "VegetablesFruits Section" << endl;

}

std::string VegetablesFruits::getcategory() {
	return "";
}

double VegetablesFruits::getprice() {
	return 0;
}

std::string VegetablesFruits::getunit() {
	return "";
}

 double VegetablesFruits::getcost(double x) {
 	cout << "Please make your selection from the following categories: \n";
 	cout << "Milk\nCheese\nYogurt\nPantry\n";
 	return 0;
 }

double VegetablesFruits::getstock() {
	return 0.0;
}

std::string VegetablesFruits::getname() {
	return this->name;
}
VegetablesFruits::~VegetablesFruits() {
}