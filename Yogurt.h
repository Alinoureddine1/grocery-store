#pragma once
#include <string>
#include "Dairy.h"

class Yogurt:public Dairy
{

private:
	std::string unit;
	std::string name;
	std::string category;
	double price;
	double stock;
public:
	Yogurt();
	Yogurt(double, double);
	virtual void print() const;
	virtual void setrprice(double);
	virtual void setstock(double);
	virtual double getcost(double);
	virtual std::string getcategory();
	virtual std::string getunit();
	virtual double getprice();
	virtual double getstock();
	virtual std::string getname();
	virtual ~Yogurt();
};

