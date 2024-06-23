#include<iostream>
#include"mobiletopup.h"
#include"account.h"
#include"bill.h"
#include"user.h"
#include"card.h"
#include"tramsaction.h"
#include<vector>
using namespace std;
int main(){
	string bno,btype,fname, lname, no, email, addreess, account_type,login_no,tacc,mno,mnetwork,cname;
	double balance,tamount,update_balance,deduct_balance,bamount,mamount;
	int choice,pin,login_pin,check=0,choice1,choice2,acc_check,j,Echeck=0;

	user u1;
	vector<user> a;
	cout << endl << "---------------------------JAZZ CASH--------------------" << endl;
	while (1)
	{

		cout << endl << "--Press 1 for registration 2 for login and 3 for exit ---  =";
		cin >> choice;
		if (choice == 1)
		{
			system("CLS");
			cout << endl << "Enter your first name :";
			cin >> fname;
			u1.setfname(fname);
			cout << endl << "Enter your last name :";
			cin >> lname;
			u1.setlname(lname);
			cout << endl << "Enter your number :";
			cin >> no;
			u1.setmobno(no);
			cout << "Enter your pin :";
			cin >> pin;
			u1.setpin(pin);
			cout << endl << "Enter your email :";
			while(1)
			{
				cin >> email;
				for (int i = 0;i < email.length();i++)
				{
					if (email[i] == '@')
					{
						Echeck = 1;
						break;
					}
					else
					{
						Echeck = 0;
					}
				}
				if (Echeck == 1)
				{
					break;
				}
				else
				{
					cout << "Enter the correct Email : ";
					continue;
				}
		
			}
			u1.setemail(email);
			cin.ignore();
			cout << endl << "Enter the address :";
			getline(cin, addreess);
			u1.setaddress(addreess);
			cout << endl << "Enter the account tpye :";
			cin >> account_type;
			u1.setaccount(account_type);
			cout << endl << "Enter the account balance :";
			
			while (1)
			{
				cin >> balance;
				if (balance < 0)
				{
					cout << "ERROR! Balance can't Be less than zero !  Enter Again :";
					continue;
				}
				else
				{
					break;
				}
			}
			u1.setBalance(balance);
			a.push_back(u1);
			system("CLS");
			cout << "You have been successfully registered now login yourself";
		}
		else if (choice == 2)
		{
			system("CLS");
			cout << "Enter your number :";
			cin >> login_no;
			cout << endl << "Enter a pin :";
			cin >> login_pin;
			for (int i = 0;i < a.size();i++)
			{
				if (a.at(i).getmobno() == login_no && a.at(i).getpin()==login_pin)
				{
					cout << endl << "Successfully login !";
					check = 1;
					system("CLS");
					while (1)
					{
						cout << endl << "------------WELCOME THE JAZZ CASH PANEL-----------";
						cout << endl << "Account holder name is " << a.at(i).gerfname() << " " << a.at(i).getlname();
						cout << endl << "Press 1 for sending money or transaction :";
						cout << endl << "Press 2 for paying bill :";
						cout << endl << "Press 3 for mobile top up :";
						cout << endl << "Press 4 for ordering card :";
						cout << endl << "Press 5 for view your account :";
						cout << endl << "Press 6 for deposit ";
						cout << endl << "Press 7 for withdraw :";
						cout <<endl  << "Press 8 for logout :";
						while (1)
						{
							cin >> choice1;
							if (choice1 >= 1 && choice1 <= 8)
							{
								break;
							}
							else
							{
								cout << "Wrong selection! Input again thanks :"<<endl;
								continue;

							}
						}
						if (choice1 == 1)
						{
							system("CLS");
							transaction t1;
							cout << endl << "Enter the account number of the person :";
							cin >> tacc;
							t1.setacno(tacc);
							cout << endl << "Enter the amount how much do you want to send :";
							while (1)
							{
								cin >> tamount;
								if (tamount < a.at(i).getbalance())
								{
									break;
								}
								else
								{
									cout << "Insufficnet balance ! Enter again =";
									continue;

								}
							}
							
							t1.setamount(tamount);
							
							system("CLS");
							for (int i = 0;i < a.size();i++)
							{
								if (tacc == a.at(i).getmobno())
								{
									j = i;
									update_balance = a.at(i).getbalance() + tamount;
									a.at(i).setBalance(update_balance);
									acc_check = 1;
									break;
								}
								else
								{
									acc_check = 0;
								}
							}
							if (acc_check == 1)
							{

								cout << endl << "Amount has been transferred successfully";
								cout << endl << "Reciever name is :" << a.at(j).gerfname();
								cout << endl << "Amount is :" << tamount;
								deduct_balance = a.at(i).getbalance() - tamount;
								a.at(i).setBalance(deduct_balance);
							}
							else
							{
								cout << "USER not found ";
							}

							continue;
						}
						if (choice1 == 2)
						{
							system("CLS");
							bill b1;
							cout << "Enter the bill no :";
							cin >> bno;
							b1.setbillno(bno);
							cout << endl << "Enter the category of bill :";
							cin >> btype;
							b1.settype(btype);
							cout << endl << "Enter the amount to pay :";
							int billcheck = 0;
							while (1)
							{
								cin >> bamount;
								if (bamount < a.at(i).getbalance())
								{
									billcheck = 1;
									break;
								}
								else
								{
									cout << "Insufficnet balance! You dont have enough amount in your account to pay the bill :";
									billcheck= 0;
									break;
								}
							}
							if (billcheck == 1)
							{
								deduct_balance = a.at(i).getbalance() - bamount;
								a.at(i).setBalance(deduct_balance);
								b1.display();
								continue;
							}
							else if(billcheck==0)
							{
								continue;
							}

						}
						if (choice1 == 3)
						{
							system("CLS");
							mobiletopup m1;
							cout << endl << "Enter the number in which you want to load :";
							cin >> mno;
							m1.setno(mno);
							cout << endl << "Enter the Network :";
							cin >> mnetwork;
							m1.setnetwork(mnetwork);
							cout << endl << "Enter the amount of which you want to load :";
							while (1)
							{
								mamount = 0;
								cin >> mamount;
								if (mamount < a.at(i).getbalance())
								{
									break;
								}
								else
								{
									cout << "Insufficnet balance ! Enter again =";
									continue;

								}
							}
							m1.setamount(mamount);
							system("CLS");
							cout << endl;
							m1.display();
							continue;
							
						}
						if (choice1 == 4)
						{
							system("CLS");
							card c1;
							cout << endl << "Press 1 for master card fee=1000 || 2 for paypak card fee: 700  =";
							cin >> choice2;
							cin.ignore();
							if (choice2 == 1)
							{
								system("CLS");
								cout << endl << "Please enter the name which you want on card :";
								getline(cin,cname);
								deduct_balance = a.at(i).getbalance() - 1000;
								a.at(i).setBalance(deduct_balance);
								card c1(cname, 1000);
								system("CLS");
								c1.display();

							}
							else if (choice2 == 2)
							{
								system("CLS");
								cout << endl << "Please enter the name which you want on card :";
								getline(cin, cname);
								deduct_balance = a.at(i).getbalance() - 700;
								a.at(i).setBalance(deduct_balance);
								card c1(cname, 700);
								system("CLS");
								c1.display();

							}
							continue;
						}
						if (choice1 == 5)
						{
							system("CLS");
							 cout <<"First Name: " << a.at(i).gerfname();
							 cout <<endl<<"Last Name :" << a.at(i).getlname();
							 cout << endl<<" Addreess :" << a.at(i).getaddress();
							 cout << endl<<"Balance :" << a.at(i).getbalance();
							 cout <<endl<<" Account tpye is :" << a.at(i).getaccount_type();
							continue;
						}
						if (choice1 == 6) 
						{
							system("CLS");
							tamount = 0;
							cout << endl << "Enter the amount how much you want to deposit :";
							cin >> tamount;
							update_balance = a.at(i).getbalance() + tamount;
							a.at(i).setBalance(update_balance);
							cout << endl << "Amount has been deposited successfully ";
						}
						if (choice1 == 7)
						{
							system("CLS");
							tamount = 0;
							cout << "Enter the amount how much you want to withdraw :";
							deduct_balance = a.at(i).getbalance() - tamount;
							a.at(i).setBalance(deduct_balance);
							cout << endl << "Amount has been withdraw Successfully :";
						}
						if (choice1 == 8)
						{
							break;
						}
					}


				}
			}
			if(check==0)
			{
				cout << "Wrong Credentials! Registered yourself first then login ";
				continue;
			}
		

		}
		else if (choice == 3)
		{
			break;
		}
	}
	return 0;
}