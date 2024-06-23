#include"card.h"
card::card()
{
	amount = 0;

}
card::card(string a, int b)
{
	setname(a);
	setamount(b);
}
void card::setname(string a)
{
	name = a;
}
void card::setamount(int a)
{
	amount = a;
}
string card::getname()
{
	return name;
}
int card::getamount()
{
	return amount;
}
int card::Cnum()
{
	int number;

	number = rand() % 1000;
	srand(time(NULL));
	return number;
}
int card::cvv()
{
	int number;

	number = rand() % 1000;
	srand(time(NULL));
	return number;
}
void card::display()
{
	cout << endl << "You have successsfully order an card with the following details.";
	cout << endl << "|-----------------------------------------------|";
	cout << endl << "|"<<name<<"                                     |";
	cout << endl << "|1045 3442 3672 3567                            |";
	cout << endl << "|validity : 06/27                               |";
	cout << endl << "|CVV:"<<cvv()<<"                           VISA     | ";
	cout << endl << "|-----------------------------------------------|";
}