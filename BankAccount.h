#pragma once // compile this file only once - include guard

#include <iostream>
#include <string> 
using namespace std;

class bankaccount {
	// by default all access is "private"
private:
	string accountNumber;
	int pin;
	double balance;   
	string routing;
// methods can be used to give controled access to attributes
public:
	// constructor - no return type. all it can return is a bank account
	bankaccount(string account, double initialDeposit, int pinCode);

	// destructor - no return type.
	~bankaccount() {
		cout << "Closing account " << accountNumber << endl;
		if (balance > 0) {
			cout << "Issuing Check For $" << balance << endl;
		}
		else if(balance < 0) {
			cout << "Turning Account over to collections!!!" << endl;
		}
	}

	// accessor methods "getter methods"
	string getAccountNumber();
	double getBalance();
	string getRoutingNumber();


	// setter or mutator methods
	double deposit(double amount, int pinCode);
	double withdraw(double amount, int pinCode);

	//bool resetPin(string SSN, string accountNumber, string accesscode, string newPin);
};
