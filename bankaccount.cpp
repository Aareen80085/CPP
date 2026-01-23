#include <iostream>
using namespace std;

// Base class

class Account {
protected:
  int accNo;
  double balance;

public:
  void getAccountDetails() {
    cout << "Enter Account Number: " << endl;
    cin >> accNo;
    cout << "Enter Balance: " << endl;
    cin >> balance;
  }

  void showBalance() {
    cout << "Account No: " << accNo << endl;
    cout << "Balance: " << balance << endl;
  }
};

// Derived Class

class savingsAccout : public Account {
public:
  double interestRate;

  void interestCal() {
    cout << "Enter Interest rate (%): " << endl;
    cin >> interestRate;
  }
  double interest = (balance * interestRate) / 100;
  void show() { cout << "Interest = " << interest << endl; }
};

// Derived class 2

class CurrentAccount : public Account {
public:
  float overdraftLimit;

  void checkOverdraft() {
    cout << "Enter Overdraft Limit: " << endl;
    cin >> overdraftLimit;

    cout << "Total Available Amount = " << balance + overdraftLimit << endl;
  }
};

int main() {
  savingsAccout sa;
  cout << "SAVINGS ACCOUNT" << endl;
  sa.getAccountDetails();
  sa.showBalance();
  sa.interestCal();

  cout << "CURRENT ACCOUNT" << endl;
  CurrentAccount ca;
  ca.getAccountDetails();
  ca.showBalance();
  ca.checkOverdraft();

  return 0;
}