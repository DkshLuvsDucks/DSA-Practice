#include<iostream>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    int balance;

public:
    BankAccount(int acc, int bal){
        cout << "creating account with acc = " << acc << ", bal = $" << bal << endl;
        accountNumber = acc;
        balance = bal;
    }

    void deposit(int depositAmount){
        balance += depositAmount;
        cout << "successfully deposited: $" << depositAmount << endl;
        getCurrentBalance();
    }

    void withdraw(int withdrawAmount){
        if(withdrawAmount > balance){
            cout << "failed to withdraw: $" << withdrawAmount << endl;
            getCurrentBalance();
            return;
        }
        balance -= withdrawAmount;
        cout << "successfully withdrawn: $" << withdrawAmount << endl;
        getCurrentBalance();
    }

    void getCurrentBalance(){
        cout << "current balance: $" << balance << endl;
    }

};


int main(){
    BankAccount b1(101, 100);
    b1.deposit(100);
    b1.withdraw(250);
    b1.withdraw(20);
    b1.getCurrentBalance();
    return 0;
}