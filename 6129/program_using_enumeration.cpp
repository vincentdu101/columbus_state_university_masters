#include <stdio.h>
#include <iostream>
using namespace std;

enum Transaction_Type{deposit, withdraw, nonaction};
enum Account_Type{checking, savings, cd, none};
int transaction;
int account;
int amount;
int checkingTotal = 1000;
int savingsTotal = 1000;
int cdTotal = 15000;

void getTransactionType() {
	cout << "Enter Transaction Type\n";
	cout << "Select from the following options:\n";
	cout << "1 - Deposit\n";
	cout << "2 - Withdraw\n";
	cout << "4 - Quit\n";
	cin >> transaction;
}

void getAccountType() {
	cout << "Enter account type\n";
	cout << "Select from the following options\n";
	cout << "1 - Checking\n";
	cout << "2 - Saving\n";
	cout << "3 - CD\n";
	cin >> account;
}

void getAmount() {
	cout << "Enter amount\n";
	cin >> amount;
}

void printBalance() {
	cout << "Ending Balance after Transaction" << endl;
	cout << "Checking: " << checkingTotal << endl;
	cout << "Savings: " << savingsTotal << endl;
	cout << "CD: " << cdTotal << endl;
}

void processDeposit() {
	if (account == Account_Type::checking) {
		checkingTotal = checkingTotal + amount;
	} else if (account == Account_Type::savings) {
		savingsTotal = savingsTotal + amount;
	} else if (account == Account_Type::cd) {
		cdTotal = cdTotal + amount;
	} else {
		cout << "Error account entered.\n";
	}
}

void processWithdraw() {
	if (account == Account_Type::checking) {
		checkingTotal = checkingTotal - amount;
	} else if (account == Account_Type::savings) {
		savingsTotal = savingsTotal - amount;
	} else if (account == Account_Type::cd) {
		cout << "CD will face penalty if withdrawn.\n";
	} else {
		cout << "Error account entered.\n";
	}
}

void processTransaction() {
	if (transaction == Transaction_Type::deposit) {
		getAccountType();
		getAmount();
		processDeposit();
		printBalance();
	} else if (transaction == Transaction_Type::withdraw) {
		getAccountType();
		getAmount();
		processWithdraw();
		printBalance();
	} else if (transaction != 4) {
		cout << "Error transaction entered.\n";
	}
}

int main() {
	while (transaction != 4) {
		getTransactionType();
		processTransaction();
	}

	return 0;
}
