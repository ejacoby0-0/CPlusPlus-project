#include <iostream>
using namespace std;

void createAccount(string& name, int& accNum, double& balance) {

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your account number: ";
    cin >> accNum;
    cout << "Please enter the initial deposit: ";
    cin >> balance;

    if (balance > 0) {
        cout << "Account created " << "\n";
    }
    else {
        cout << "Deposit must be grater then 0 " << "\n";
        balance = 0;
    }

}

void depositMoney(double& balance) {

    double deposite;
    cout << "Enter deposit amount: ";
    cin >> deposite;

    if (deposite > 0) {
        balance += deposite;
        cout << "Deposite added, new balance: " << balance << "\n";
    }
    else {
        cout << "Deposite amount must be greater then 0" << "\n";
    }
}

void withdrawMoney(double& balance) {

    double withdraw;
    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    if (withdraw > 0 && withdraw <= balance) {
        balance -= withdraw;
        cout << "Withdrawal made, new balance: " << balance << "\n";
    }
    else if (withdraw > balance) {
        cout << "Insufficient balance. " << "\n";
    }
    else {
        cout << "Withdrawal amount must be greater then 0. " << "\n";
    }

}

void checkBalance(const double& balance) {

    cout << "Your currant account balance is " << balance << "\n";

}

void displayAccDetails(const string& name, const int& accNum, const double& balance) {

    cout << "Acount name: " << name << "\n";
    cout << "Acount number: " << accNum << "\n";
    cout << "Acount balance: " << balance << "\n";

}

int main() {

    string name;
    int accNum;
    double balance = 0.0;
    bool accountCreated = false;
    int choice;

    do {

        cout << "\n" << "--- Bank Account Management System --- " << "\n";

        cout << "1. Create a new accouunt: " << "\n";
        cout << "2. Deposite money: " << "\n";
        cout << "3. Withdraw money: " << "\n";
        cout << "4. Check balance: " << "\n";
        cout << "5. Displaye account details: " << "\n";
        cout << "6. Exit: " << "\n";

        cout << "\n" << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (!accountCreated) {
                createAccount(name, accNum, balance);
                accountCreated = true;
            }
            else {
                cout << "Account is already created. " << "\n";
            }
            break;

        case 2:
            if (accountCreated) {
                depositMoney(balance);
            }
            else {
                cout << "First create a account to deposite money. " << "\n";
            }
            break;

        case 3:
            if (accountCreated) {
                withdrawMoney(balance);
            }
            else {
                cout << "First create a account to withdraw money. " << "\n";
            }
            break;

        case 4:
            if (accountCreated) {
                checkBalance(balance);
            }
            else {
                cout << "First create a account to check balance. " << "\n";
            }
            break;

        case 5:
            if (accountCreated) {
                displayAccDetails(name, accNum, balance);
            }
            else {
                cout << "First create a account to display account details. " << "\n";
            }
            break;

        case 6:
            cout << "Exiting the system. " << "\n";
            break;

        default:
            cout << "Invalid option, choice form 1-6: ";
        }

    } while (choice != 6);

    return 0;

}
