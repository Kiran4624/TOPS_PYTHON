// Assume that a bank maintains two kinds of accounts for customer, one called as saving account and
// other as current accounts provides Simple interest and withdraw facilities but no cheque book facility.
// The current account provides cheque book facility but no interest.
// Current account holders should maintain a minimum balance and if the balance falls below this
// level a service charges is imposed
// Create a class account that stores customer name, account number and type of account.
// From this derive classes curr_acc and sav_acct to make them more specific to their
// requirements Include necessary member functions in order to achieve the following tasks a.
// Accepts deposit from
// a customer and update balance.
// b. Display the balance.
// c. Compute and deposit interest.
// d. Permit withdraws and updates the balance.
// e. Check for the minimum balance, impose penalty, necessary and update the balance
#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string customerName;
    string accountNumber;
    string accountType;
    double balance;

public:
    Account(const string& name, const string& accNumber, const string& accType)
        : customerName(name), accountNumber(accNumber), accountType(accType), balance(0) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful. New balance: " << balance << endl;
    }

    void dB() {
        cout << "Current balance: " << balance << endl;
    }
};

class CurrAcc : public Account {
private:
    double miniBal;
    double serviceCharge;

public:
    CurrAcc(const string& name, const string& accNumber)
        : Account(name, accNumber, "Current"), miniBal(1000), serviceCharge(50) {}

    void withdraw(double amount) {
        if (balance - amount < miniBal) {
            cout << "Transaction failed. Insufficient balance." << endl;
            balance -= serviceCharge;
            cout << "Service charge of " << serviceCharge << " imposed. New balance: " << balance << endl;
        } else
         {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful. New balance: " << balance << endl;
        }
    }
};

class SavAcc : public Account {
private:
    double interestRate;

public:
    SavAcc(const string& name, const string& accNumber)
        : Account(name, accNumber, "Savings"), interestRate(0.05) {}

    void compI() {
        double interest = balance * interestRate;
        deposit(interest);
        cout << "Interest of " << interest << " credited. New balance: " << balance << endl;
    }
};

int main()
 {
    CurrAcc currentAcc("kiran tandel", "12345");
    SavAcc savingsAcc("viral tandel", "67890");

    currentAcc.deposit(5000);
    savingsAcc.deposit(10000);

    currentAcc.withdraw(2000);

    savingsAcc.compI();

    currentAcc.dB();
    savingsAcc.dB();
}
