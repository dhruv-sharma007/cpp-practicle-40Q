//write a cpp program to create a simple class named account and write methods to deposit and witdraw amount from the account.
#include <iostream>

class Account {
private:
    double balance;

public:
    Account() : balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: " << amount << "\n";
        } else {
            std::cout << "Invalid deposit amount\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: " << amount << "\n";
        } else {
            std::cout << "Invalid withdraw amount\n";
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    Account myAccount;
    myAccount.deposit(100.0);
    myAccount.withdraw(50.0);
    std::cout << "Current balance: " << myAccount.getBalance() << "\n";
    return 0;
}
 