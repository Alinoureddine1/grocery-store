#pragma once
#include <string>
#include "Fish.h"

class SeaBass:public Fish
{
private:
	std::string unit;
	std::string name;
	std::string category;
	double price;
	double stock;
public:
	SeaBass();
	SeaBass(double, double);
	virtual double getcost(double);
	virtual double getstock();
	virtual std::string getname();
	virtual std::string getcategory();
	virtual double getprice();
	virtual std::string getunit();
	virtual void setrprice(double);
	virtual void setstock(double);
	virtual void print() const;
	virtual ~SeaBass();

};

