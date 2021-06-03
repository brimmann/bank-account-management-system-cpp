#include <iostream>
#include <string>
#include "account_class.h"

account::account( string n, unsigned int aN, string aT,unsigned int b)
{
	name = n; accountNumber = aN; accountType = aT; balance = b;
}

void account::Deposit(unsigned int input)
{
	balance += input;
}

int account::WithDraw(unsigned int input)
{
	if (input > balance)
	{
		balance -= input;
		return input;
	}
	else
		std::cout << "Amount Exceeds!\n";
}

void account::Display()
{
	using namespace std;
	cout << "Name: " << name << endl;
	cout << "Amount: " << balance << endl;
}