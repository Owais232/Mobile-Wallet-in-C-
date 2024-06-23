#pragma once
#include<iostream>
#include<string>
using namespace std;
class account{
	double balance;
	string account_type;
public:
	account();
	account(double, string);
	void setbalance(double);
	void setaccount_type(string);
	double getamount();
	string getaccount_type();
	void display();
};
