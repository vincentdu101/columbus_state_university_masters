#include <stdio.h>
#include <iostream>
using namespace std;

int transaction;
int account;
int amount;
int checkingTotal = 1000;
int savingsTotal = 1000;
int cdTotal = 15000;

void getTransactionType() {
    cout << "Enter Transaction Type\n";
    cout << "Select from the following options:\n";
    cout << "0 - Deposit\n";
    cout << "1 - Withdraw\n";
    cout << "2 - Print Balance\n";
    cout << "3 - Exit\n";
    cin >> transaction;
}

void getAccountType() {
    cout << "Enter account type\n";
    cout << "Select from the following options\n";
    cout << "0 - Checking\n";
    cout << "1 - Saving\n";
    cout << "2 - CD\n";
    cin >> account;
}

void getAmount() {
    cout << "Enter amount\n";
    cin >> amount;
}

void printBalance() {
    cout << "\nEnding Balance after Transaction" << endl;
    cout << "Checking: " << checkingTotal << endl;
    cout << "Savings: " << savingsTotal << endl;
    cout << "CD: " << cdTotal << "\n" << endl;
}

void processDeposit() {
    if (account == 0) {
        checkingTotal = checkingTotal + amount;
    } else if (account == 1) {
        savingsTotal = savingsTotal + amount;
    } else if (account == 2) {
        cdTotal = cdTotal + amount;
    } else {
        cout << "Error account entered.\n";
    }
}

void processWithdraw() {
    if (account == 0) {
        checkingTotal = checkingTotal - amount;

        if (checkingTotal < 0) {
            cout << "You cannot withdraw more than what is in your account." << endl;
            checkingTotal = checkingTotal + amount;
        }
    } else if (account == 1) {
        savingsTotal = savingsTotal - amount;

        if (savingsTotal < 0) {
            cout << "You cannot withdraw more than what is in your account." << endl;
            savingsTotal = savingsTotal + amount;
        }
    } else if (account == 2) {
        cout << "CD cannot be withdrawn until deadline.\n";
    } else {
        cout << "Error account entered.\n";
    }
}

void processTransaction() {
    if (transaction == 0) {
        getAccountType();
        getAmount();
        processDeposit();
        printBalance();
    } else if (transaction == 1) {
        getAccountType();
        getAmount();
        processWithdraw();
        printBalance();
    } else if (transaction == 2) {
        printBalance();
    } else if (transaction != 3) {
        cout << "Error transaction entered.\n" << endl;
    }
}

int main() {
    while (transaction != 3) {
        getTransactionType();
        processTransaction();
    }
    return 0;
}
