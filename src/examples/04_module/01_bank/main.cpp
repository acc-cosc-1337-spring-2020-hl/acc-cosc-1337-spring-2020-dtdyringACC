#include "checking_account.h"
#include "savings_account.h"

using std::reference_wrapper;

int main()
{
	SavingsAccount s(1000);
	CheckingAccount c(1000);

	vector<reference_wrapper<BankAccount>> acts{ s, c };

	for (auto account_ref : acts)
	{
		cout << account_ref.get().get_balance() << "\n";
	}

	return 0;
}