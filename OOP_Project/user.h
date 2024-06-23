#pragma once
#include<iostream>
#include<string>
#include"account.h"
using namespace std;
class user {
private:
	string fname;
	string lname;
	string mobno;
	int pin;
	string address;
	string email;
	account acc;
public:
	user();
	user(string, string, string, string,int,string, account);
	void setfname(string);
	void setlname(string);
	void setmobno(string);
	void setpin(int);
	void setaddress(string);
	void setemail(string);
	void setaccount(account);
	void setBalance(double);
	double getbalance();
	void setaccount(string);
	int getpin();
	string getaccount_type();
	string gerfname();
	string getlname();
	string getmobno();
	string getaddress();
	string getemail();
	account getaccount();
	void display();
};