#include <iostream>

using namespace std;

struct BankAccount {
  int account_number;
  string account_holder_name;
  double account_balance;
};

// Create a new bank account.
void createAccount(BankAccount &account) {
  cout << "Enter account number: ";
  cin >> account.account_number;
  cout << "Enter account holder name: ";
  cin.ignore();
  getline(cin, account.account_holder_name);
  cout << "Enter account balance: ";
  cin >> account.account_balance;
}

// Deposit money into an account.
void depositMoney(BankAccount &account) {
  double amount;
  cout << "Enter amount to deposit: ";
  cin >> amount;
  account.account_balance += amount;
  cout << "Money deposited successfully. Current balance: " << account.account_balance << endl;
}

// Withdraw money from an account.
void withdrawMoney(BankAccount &account) {
  double amount;
  cout << "Enter amount to withdraw: ";
  cin >> amount;
  if (account.account_balance >= amount) {
    account.account_balance -= amount;
    cout << "Money withdrawn successfully. Current balance: " << account.account_balance << endl;
  } else {
    cout << "Insufficient balance." << endl;
  }
}

// Display the account details.
void displayAccountDetails(BankAccount &account) {
  cout << "Account Number: " << account.account_number << endl;
  cout << "Account Holder Name: " << account.account_holder_name << endl;
  cout << "Account Balance: " << account.account_balance << endl;
}

int main() {
  BankAccount account;

  int choice;
  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Create new account" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Display account details" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        createAccount(account);
        break;
      case 2:
        depositMoney(account);
        break;
      case 3:
        withdrawMoney(account);
        break;
      case 4:
        displayAccountDetails(account);
        break;
      case 5:
        exit(0);
        break;
      default:
        cout << "Invalid choice." << endl;
    }
  }

  return 0;
}
