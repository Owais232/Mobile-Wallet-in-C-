#pragma once
#include<iostream>
#include<string>
#include<time.h>
using namespace std;
class card {
	private:
		string name;
		int amount;
public:
	card();
	card(string, int);
	void setname(string);
	void setamount(int);
	string getname();
	int getamount();
	int Cnum();
	int cvv();
	void display();
};

