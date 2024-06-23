#pragma once
#include<iostream>
#include<string>
using namespace std;
class bill {
private:
	string billno;
	string type;
	double amount;
public:
	bill();
	bill(string, string, double);
	void setbillno(string);
	void settype(string);
	void setamount(double);
	string getbillno();
	string gettype();
	double getamount();
	void display();
};