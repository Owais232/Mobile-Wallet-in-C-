#include"bill.h"
#include<iostream>
using namespace std;
bill::bill()
{
	billno="";
	type= "";
	amount = 0;
}
bill::bill(string a, string b, double c)
{
	setbillno(a);
	settype(b);
	setamount(c);

}
void bill::setbillno(string a)
{
	billno = a;
}
void bill::settype(string a)
{
	type = a;
}
void bill::setamount(double a)
{
	amount = a;
}
string bill::getbillno()
{
	return billno;
}
string bill::gettype()
{
	return type;
}
double bill::getamount()
{
	return amount;
}
void bill::display()
{
	cout << "The bill of  " << type << " Has been successfully paid of amount :" << amount;
}