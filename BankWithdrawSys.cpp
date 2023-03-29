#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount() {
        balance = 0;
    }
    double getBalance() {
        return balance;
    }
    void addMoney(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    void takeCredit(double amount, double interestRate, int months) {
        double total = amount + amount * interestRate / 100 * months;
        balance += total;
        cout << "Credited: " << total << endl;
    }
};

int main() {
    BankAccount account;
    account.addMoney(1000);
    cout << "Current balance: " << account.getBalance() << endl;
    account.withdraw(500);
    cout << "Current balance: " << account.getBalance() << endl;
    account.takeCredit(1000, 2, 12);
    cout << "Current balance: " << account.getBalance() << endl;
    return 0;
}
