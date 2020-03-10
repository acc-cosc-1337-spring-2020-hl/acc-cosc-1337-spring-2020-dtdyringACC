//bank_account.h
#include <iostream>
#include <string>
#include <vector>
#ifndef BANK_ACCOUNT_H //header guards; protect from recreation of class definitions
#define BANK_ACCOUNT_H

using std::cout; using std::string; using std::vector;

class BankAccount
{
public:
	BankAccount() = default;
	explicit BankAccount(int b) : balance{ b } {}
	int get_balance() const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);
	//void open(int amount);
	double get_rate() const { return rate; }
	friend void display_balance(const BankAccount& b);
	friend std::ostream& operator<<(std::ostream& out, const BankAccount& b);
	friend std::istream& operator>>(std::istream& in, BankAccount& b);
protected:
	int balance{ 0 };
private:
	const int min_balance_to_open{ 25 };
	static double rate;
	static double init_rate() { return 0.025; }
};

class InvalidAmount
{
public:
	InvalidAmount(string msg) : message{ msg } {}
	string get_message()const { return message; }
private:
	string message;
};

#endif //!BANK_ACCOUNT_H