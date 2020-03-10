#include "checking_account.h"

int main()
{
	CheckingAccount a(50), b(10);
	display_balance(a);
	cout<<a << "\n";
	
	cout << a.get_balance();

	vector<BankAccount> accounts{ BankAccount(100), BankAccount(200), BankAccount(300) };

	for (auto act : accounts)
	{
		display_balance(act);
	}

	return 0;
}