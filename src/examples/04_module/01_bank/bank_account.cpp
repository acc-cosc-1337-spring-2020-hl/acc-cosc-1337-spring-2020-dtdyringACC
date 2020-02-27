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