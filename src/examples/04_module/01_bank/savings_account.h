#include "bank_account.h"

class SavingsAccount : public BankAccount
{
public:
	SavingsAccount() = default;
	explicit SavingsAccount(int b) : BankAccount(b) {}
	int get_balance() const { return balance + (1/12 * 1.025); }
};