#pragma once
#include <string>
#include "Fish.h"

class Salmon:public Fish
{
private:
	std::string unit;
	std::string name;
	std::string category;
	const double price =28.0;
	double stock;
public:
	Salmon();
	virtual double getcost(double);
	virtual double getstock();
	virtual std::string getcategory();
	virtual double getprice();
	virtual std::string getunit();
	virtual std::string getname();
	virtual void print() const;
	virtual ~Salmon();
};

