#pragma once
#include<iostream>
#include<string>
using namespace std;
class transaction {
private:
	string acno;
	double amount;
public:
	transaction();
	transaction( string,double);
	void setacno(string);
	void setamount(double);
	string getacno();
	double getamount();
	void display();
};