#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

struct address {
	string street;
	string city;
	string state;
	string zipcode;  // leading zeros
};

// stuctures don't include access specifiers (protection), and they don't support inheritance, polymorphism, limmited on operator overloading

struct student {
	string name;
	address home;
	int numCredits;
	float gpa;
};

int main() {

/*	student myStudent;

	myStudent.name = "Fred";
	myStudent.numCredits = 32;
	myStudent.gpa = 3.5;

	myStudent.home.state = "IN";

	myStudent.gpa = 9.0;
*/
	string acctNum;
	double amount;
	int pin; 

	cout << "Enter account number: ";
	cin >> acctNum;
	cout << "Enter initial deposit: ";
	cin >> amount;
	cout << "Enter PIN: ";
	cin >> pin;

	// constructed or instantiated an instance of a bank account
	bankaccount myAccount(acctNum, amount, pin); // constructor allows us to initialize an object


	// use accessor methods to retrieve information
	cout << myAccount.getAccountNumber() << " has a balance of " << myAccount.getBalance();

	cout << "Enter amount to deposit: ";
	cin >> amount;

	//mutator methods to "change" the object
	myAccount.deposit(amount, pin);

	cout << myAccount.getAccountNumber() << " has a balance of " << myAccount.getBalance();

	cout << "Enter amount to withdraw: ";
	cin >> amount;

	myAccount.withdraw(amount, pin);

	cout << myAccount.getAccountNumber() << " has a balance of " << myAccount.getBalance();


	

	return 0;
}