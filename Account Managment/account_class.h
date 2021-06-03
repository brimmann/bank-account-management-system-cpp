#include <string>
using std::string;
class account
{
private:
	string name;
	unsigned int accountNumber;
	string accountType;
	unsigned int balance;
public:
	account() { name = "Empty"; accountNumber = 0; accountType = "Unkonw"; balance = 0; }
	account(string n, unsigned int aN, string aT , unsigned int b);
	void Deposit(unsigned int);
	int WithDraw(unsigned int);
	void Display();
};