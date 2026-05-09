#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {
public:
    string name;
    double balance;
    Account(string n, double b) : name(n), balance(b) {}
    
    void deposit(double amt) { balance += amt; }
    bool withdraw(double amt) {
        if (amt <= balance) { balance -= amt; return true; }
        return false;
    }
};

int main() {
    string n; double b;
    cout << "Create Account Name: "; cin >> n;
    cout << "Initial Deposit: "; cin >> b;
    Account myAcc(n, b);

    int choice;
    while(true) {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) { double a; cin >> a; myAcc.deposit(a); }
        else if (choice == 2) { double a; cin >> a; if(!myAcc.withdraw(a)) cout << "Low balance\n"; }
        else if (choice == 3) cout << "Balance: " << myAcc.balance << endl;
        else break;
    }
    return 0;
}