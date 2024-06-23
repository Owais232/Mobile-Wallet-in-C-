#include"mobiletopup.h"
using namespace std;
mobiletopup::mobiletopup()
{
	amount = 0;

}
mobiletopup::mobiletopup(string  a,string b, double c)
{
	setno(a);
	setnetwork(b);
	setamount(c);

}
void mobiletopup::setno(string a)
{
	no = a;
}
void mobiletopup::setnetwork(string a)
{
	network = a;
}
void mobiletopup::setamount(double a)
{
	amount = a;
}
string mobiletopup::getno()
{
	return no;
}
string mobiletopup::getnetwork()
{
	return network;
}
double mobiletopup::getamount()
{
	return amount;
}
void mobiletopup::display()
{
	cout << "You have been successfully loaded " << " " << amount << " Rs on number =" << no<<endl;
}