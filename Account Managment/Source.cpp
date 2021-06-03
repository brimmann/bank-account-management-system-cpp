#include <iostream>
#include "account_class.h"
#define SIZE 10
int main()
{
	using namespace std;
	char option;
	account arrAccounts[SIZE];
	unsigned int track[SIZE];
	string name, aT; unsigned int b, aN; bool accountExist = false; int as = -1;
	while (1)
	{
		cout << "Enter and option: a - create acount, b - deposit, c - withdraw, d - main menu, e - exit:";
		cin >> option;
		if (option == 'a')
		{
			cin.ignore();
			cout << "Name: "; getline(cin, name);  
			cout << "Account Number: "; cin >> aN; cin.ignore();
			cout << "Account Type: "; getline(cin, aT); 
			cout << "Balance: "; cin >> b;
			for (int i = 0; !accountExist && i < SIZE; i++) { if (aN == track[i]) accountExist = true; }
			if (accountExist == false)
			{
				track[++as] = aN;
				account Object(name, aN, aT, b);
				arrAccounts[as] = Object;
				continue;
			}
			else { cout << "Account number already exist" << endl; continue; }
		}
		else if (option == 'b')
		{
			int index;
			cout << "Enter Acount Number: "; cin >> aN;
			for (int i = 0; i < SIZE; i++)
			{
				if (aN == track[i]) { index = i; accountExist = true; break; }
			}
			if (accountExist == false) { "Account doesn't exist"; continue; }
			cout << "Amount: ";
			int dAmount; cin >> dAmount;
			arrAccounts[index].Deposit(dAmount);
			continue;
		}
		else if (option == 'c')
		{
			int index;
			cout << "Enter Acount Number: "; cin >> aN;
			for (int i = 0; i < SIZE; i++)
			{
				if (aN == track[i]) { index = i; accountExist = true; break; }
			}
			if (accountExist == false) { "Account doesn't exist"; continue; }
			cout << "Amount: ";
			int dAmount; cin >> dAmount;
			cout << "Withdrawn: " << arrAccounts[index].WithDraw(dAmount) << endl;
			continue;
		}
		else if (option == 'd')
		{
			continue;
		}
		else if (option == 'e')
		{
			break;
		}
		else
		{
			cout << "invalide input!" << endl;
		}
	}
	return 0;
}