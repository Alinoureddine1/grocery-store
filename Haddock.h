#pragma once
#include <string>
#include "Fish.h"
class Haddock: public Fish
{

private:
	std::string unit;
	std::string name;
	std::string category;
	const double price = 20.0;
	double stock;
public:
	Haddock();
	virtual double getcost(double);
	virtual void print() const ;
	virtual std::string getcategory();
	virtual double getprice();
	virtual std::string getunit();
	virtual double getstock();
	virtual std::string getname();
	virtual ~Haddock();

};

