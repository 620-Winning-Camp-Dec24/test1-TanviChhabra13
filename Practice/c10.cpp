#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double bal) : balance(bal) {}
    virtual void calculateInterest() = 0;
    virtual void display() = 0;
};

class SavingsAccount : public Account {
    double rate;
    int time;
public:
    SavingsAccount(double bal, double r, int t) : Account(bal), rate(r), time(t) {}
    void calculateInterest() override {
        double interest = balance * rate * time;
        balance += interest;
    }
    void display() override {
        cout << "Savings Account Balance: " << balance << endl;
    }
};

class CurrentAccount : public Account {
    double maintenanceFee;
public:
    CurrentAccount(double bal, double fee) : Account(bal), maintenanceFee(fee) {}
    void calculateInterest() override {
        balance -= maintenanceFee;
    }
    void display() override {
        cout << "Current Account Balance: " << balance << endl;
    }
};

int main() {
    double initialBalance, rate, fee;
    int time;

    cout << "Enter initial balance for savings account: ";
    cin >> initialBalance;
    cout << "Enter interest rate and time (years): ";
    cin >> rate >> time;

    SavingsAccount sa(initialBalance, rate, time);
    sa.calculateInterest();
    sa.display();

    cout << "Enter initial balance for current account: ";
    cin >> initialBalance;
    cout << "Enter maintenance fee: ";
    cin >> fee;

    CurrentAccount ca(initialBalance, fee);
    ca.calculateInterest();
    ca.display();

    return 0;
}
