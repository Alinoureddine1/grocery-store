#pragma once
#include "Grocery.h"
#include <string>
class Dairy: public Grocery
{

private:
	std::string name;
public:
	Dairy();
	virtual void print() const  ;
	virtual double getcost(double);
	virtual double getstock();
	virtual std::string getcategory();
	virtual double getprice();
	virtual void setrprice(double)=0;
	virtual void setstock(double)=0;
	virtual std::string getunit();
	virtual std::string getname();
	virtual ~Dairy();
};

