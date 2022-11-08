#pragma once
#include <string>
#include "Fish.h"

class SeaBass:public Fish
{
private:
	std::string unit;
	std::string name;
	std::string category;
	const double price =15.0;
	double stock;
public:
	SeaBass();
	virtual double getcost(double);
	virtual double getstock();
	virtual std::string getname();
	virtual std::string getcategory();
	virtual double getprice();
	virtual std::string getunit();
	virtual void print() const;
	virtual ~SeaBass();

};

