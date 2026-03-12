#include <iostream>

using namespace std;

class BankAccount {
	private:
    int accountNumber;
    float balance;
    string ownerName;

	public:
    
    BankAccount(int accNo, string name, float bal) {
        accountNumber = accNo;
        ownerName = name;
        balance = bal;
    }

    
    void credit(float amount) {
        balance = balance + amount;
        cout << "Amount credited successfully.\n";
    }

    
    void debit(float amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Amount debited successfully.\n";
        } else {
            cout << "Insufficient balance.\n";
        }
    }

    
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, "Sahil", 99999999);

    acc1.displayBalance();

    acc1.credit(1000);
    acc1.displayBalance();

    acc1.debit(2000);
    acc1.displayBalance();

    return 0;
}
