#pragma once
#include <string>
class Grocery
{
public:
	Grocery();
	virtual void print() const;
	virtual std::string getname();
	virtual std::string getcategory()=0;
	virtual std::string getunit() = 0;
	virtual double getprice()=0;
	virtual double getcost(double)=0;
	virtual double getstock() = 0;
	virtual ~Grocery();
	
private:
	std::string name;
};

