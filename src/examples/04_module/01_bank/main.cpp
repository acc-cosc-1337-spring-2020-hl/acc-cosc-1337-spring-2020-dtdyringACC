#include "bank_account.h"

int main()
{
	vector<BankAccount> accounts{ BankAccount(100), BankAccount(200), BankAccount(300) };
	int balance = account.get_balance();
	cout << "Balance: " << balance;
	try
	{
		account.deposit(-10);
	}
	catch (InvalidAmount e)
	{
		cout << e.get_message();
	}

	return 0;
}