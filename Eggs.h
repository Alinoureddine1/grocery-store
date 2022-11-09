#pragma once
#include <string>
#include "Dairy.h"

class Eggs:public Dairy
{

private:
	std::string unit;
	std::string name;
	std::string category;
	const double price = 3.0;
	double stock;
public:
	Eggs();
	virtual void print() const;
	virtual double getcost(double);
	virtual std::string getcategory();
	virtual std::string getunit();
	virtual double getprice();
	virtual double getstock();
	virtual std::string getname();
	virtual ~Eggs();
};

