#pragma once
#include<iostream>
#include<string>
using namespace std;
class mobiletopup{
private:
	string no;
	string network;
	double amount;
public:
	mobiletopup();
	mobiletopup(string, string,double);
	void setno(string);
	void setnetwork(string);
	void setamount(double);
	string getno();
	string getnetwork();
	double getamount();
	void display();
};