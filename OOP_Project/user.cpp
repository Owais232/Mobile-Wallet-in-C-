#include"user.h"
#include<iostream>
using namespace std;
user::user()
{
	
	fname = "";
	lname = "";
	mobno = "";
	address = "";
	email = "";
}
user::user(string a,string b, string c, string d,int q, string e, account f)
{
	setfname(a);
	setlname(b);
	setmobno(c);
	setpin(q);
	setaddress(d);
	setemail(e);
	setaccount(f);
}
void user::setpin(int a)
	{
	pin = a;

	}
int user::getpin()
{
	return pin;
}
void user::setfname(string a)
{
	fname = a;
}
void user::setlname(string a)
{
	lname = a;
}
void user::setmobno(string a)
{
	mobno = a;
}
void user::setaddress(string a)
{
	address = a;
}
void user::setemail(string a)
{
	email = a;

}
string user::getaccount_type()
{
	return acc.getaccount_type();
}
void user::setaccount(account e)
{
	acc = e;
}
void user::setBalance(double val)
{
	acc.setbalance(val);
}
double user::getbalance()
{
	return acc.getamount();
}
void user::setaccount(string a)
{
	acc.setaccount_type(a);
}
string user::gerfname()

{
	return fname;
}
string user::getlname()
{
	return lname;
}
string user::getmobno()
{
	return mobno;
}
string user::getaddress()
{
	return address;
}
string user::getemail()
{
	return email;
}
account user::getaccount()
{
	return acc;
}
void user::display()
{
	cout << endl << "First name is :" << fname;
	cout << endl << "last name is :" << lname;
	cout << endl << "Phone no is :" << mobno;
	cout << endl << "Address is :" << address;
	cout << endl << "Email is :" << email;
	acc.getamount();
}