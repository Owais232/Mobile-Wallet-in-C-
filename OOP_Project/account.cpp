#include"account.h"
#include<iostream>
using namespace std;
account::account()
{
	balance = 0;
	account_type= "";
}
account::account(double a, string b)
{
	setbalance(a);
	setaccount_type(b);
}
void account::setbalance(double a)
{
	balance = a;
}
void account::setaccount_type(string a)
{
	account_type = a;
}
double account::getamount()
{
	return balance;
}
string account::getaccount_type()
{
	return account_type;
}
void account::display()
{
	cout << endl << "Your account type is :" << account_type;
	cout<<endl<< "The balance availabale in your account is  :" << balance;
}