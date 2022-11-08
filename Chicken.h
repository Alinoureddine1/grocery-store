#pragma once
#include <string>
#include "Meat.h"

class Chicken:public Meat
{

private:
	std::string unit;
	std::string name;
	std::string category;
	const double price = 20.0;
	double stock;
public:
	Chicken();
	virtual void print() const;
	virtual double getcost(double);
	virtual std::string getcategory();
	virtual double getstock();
	virtual double getprice();
	virtual std::string getunit();
	virtual std::string getname();
	virtual ~Chicken();

};

