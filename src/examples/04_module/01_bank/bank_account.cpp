//bank_account.cpp
#include "bank_account.h"


void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		throw InvalidAmount("\nAmount must be greater than 0.");
	}
}
void BankAccount::withdraw(int amount)
{
	if (amount <= 0)
	{
		throw InvalidAmount("\nAmount must be greater than 0.\n");
	}
	else if (balance - amount < 0)
	{
		throw InvalidAmount("\nInsufficient funds.\n");
	}

	else
	{
		balance -= amount;
	}
}

//void BankAccount::open(int amount)
//{
//
//}

double BankAccount::rate = init_rate();

void display_balance(const BankAccount& b)
{
	cout << "Balance is: " << b.balance << "\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount& b)
{
	out << "Balance is: " << b.balance << "\n";
	return out;		
}

std::istream& operator>>(std::istream& in, BankAccount& b)
{
	int amount;
	cout << "Enter amount to deposite: \n";
	in >> amount;
	b.deposit(amount);
	return in;
}
