#pragma once
#include <string>
#include "Dairy.h"

class Cheese:public Dairy
{

private:
	std::string unit;
	std::string name;
	std::string category;
	const double price = 25.0;
	double stock;
public:
	Cheese();
	virtual void print() const;
	virtual double getcost(double);
	virtual std::string getcategory();
	virtual std::string getunit();
	virtual double getprice();
	virtual double getstock();
	virtual std::string getname();
	virtual ~Cheese();
};

