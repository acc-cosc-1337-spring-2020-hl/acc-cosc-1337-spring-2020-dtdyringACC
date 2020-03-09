#include "bank_account.h"

int main()
{

	BankAccount a(50), b(10);
	//BankAccount c = a + b;
	display_balance(a);
	cout<<a;

	vector<BankAccount> accounts{ BankAccount(100), BankAccount(200), BankAccount(300) };

	for (auto act : accounts)
	{
		display_balance(act);
		//cout << "Balance is: " << act.get_balance() << "\n";
	}

	return 0;
}