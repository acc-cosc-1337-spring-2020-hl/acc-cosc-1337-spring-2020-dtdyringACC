//checking_account.h
#include "bank_account.h"

class CheckingAccount : public BankAccount
{
public:
	CheckingAccount() = default;
	explicit CheckingAccount(int b) : BankAccount(b) {} //classes that inherit the public functions of a parent class
	int get_balance() const { return balance * (1 + get_rate()); }//must use their constructor to pass to the parent's constructor to permit the child class access 
	//to properly initialize the parent class's variables; generalizes to all languages
};