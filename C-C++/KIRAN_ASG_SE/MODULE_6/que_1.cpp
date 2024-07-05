#include<iostream>
using namespace std;

class bankacc 
{
    public:
        char name[50], type_acc[50];
        long int accno, balance, depamt;

    public:
        void get() 
        {
            cout << "Enter the account holder name: ";
            cin >> name;
            cout << "Enter the account type: " << endl;
            cin >> type_acc;
            cout << "Enter the account number: " << endl;
            cin >> accno;
            cout << "Enter the account balance: " << endl;
            cin >> balance;
        }

        void deposit() {
            cout << "Enter the amount of deposit: ";
            cin >> depamt;
            balance = balance + depamt;
        }

        void withdraw() 
        {
            cout << "The total balance is: " << balance << endl;
            cout << "How much you withdraw: ";
            cin >> depamt;
            if (depamt <= balance) 
            {
                balance = balance - depamt;
                cout << "Withdrawn amount: " << depamt << endl;
            }
             else 
            {
                cout << "Insufficient funds. Withdrawal not allowed." << endl;
            }
        }

        void display() 
        {
            cout << "The name of the account holder is: " << name << endl;
            cout << "The balance is: " << balance << endl;
        }
};

int main() {
    bankacc ba;
    cout << "Information" << endl;
    ba.get();
    ba.display();
    ba.deposit();
    ba.display();
    ba.withdraw();
    ba.display();

   
}
