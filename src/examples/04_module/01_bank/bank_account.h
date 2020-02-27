//bank_account.h
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::string; using std::vector;

class BankAccount
{
public:
	BankAccount(int b) : balance{ b } {};
	int get_balance() const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);

private:
	int balance;
};

class InvalidAmount
{
public:
	InvalidAmount(string msg) : message{ msg } {}
	string get_message()const { return message; }
private:
	string message;
};