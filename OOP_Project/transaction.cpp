#include"tramsaction.h"
#include<iostream>
using namespace std;
transaction::transaction()
{
	acno = "";
	amount = 0;

}
transaction::transaction( string b,double c)
{
	setacno(b);
	setamount(c);

}
void transaction::setacno(string a)
{
	acno = a;
}
void transaction::setamount(double a)
{
	amount = a;
}
string transaction::getacno()
{
	return acno;
}
double transaction::getamount()
{
	return amount;
}
void transaction::display()
{
	cout << endl << "---------------Transaction reciept------------------";
	cout << endl << "Amount :" << amount;
}