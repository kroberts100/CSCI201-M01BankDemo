#include <iostream>
#include <string>
#include "BankAccount.h"

// constructor - no return type. all it can return is a bank account
bankaccount::bankaccount(string account, double initialDeposit, int pinCode) {
	accountNumber = account;
	balance = initialDeposit;
	routing = "0045454";
	pin = pinCode;
}
// accessor methods "getter methods"
string bankaccount::getAccountNumber() {
	return accountNumber;
}
double bankaccount::getBalance() {
	return balance;
}

double bankaccount::deposit(double amount, int pinCode) {
	if (amount < 0)
		throw invalid_argument("cannot deposit less than zero");
	if (pin != pinCode) {
		throw invalid_argument("Invaild operation!!!");
	}
	balance += amount;
	return balance;
}

double bankaccount::withdraw(double amount, int pinCode) {
	if (amount < 0)
		throw invalid_argument("cannot withdraw less than zero");
	if (amount > balance)
		throw invalid_argument("insufficient funds");
	if (pin != pinCode) {
		throw invalid_argument("Invaild operation!!!");
	}
	balance -= amount;
	return balance;
}

string bankaccount::getRoutingNumber() {
	return routing;
}