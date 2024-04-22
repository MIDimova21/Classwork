#include <iostream>
using namespace std;

class BankAccount
{
private:
	string names;
	string number;
	double balance;
public:
	BankAccount(string name, string num, double bal)
	{
		names = name;
		number = num;
		balance = bal;
	}
    void AccountInfo() 
    {
        cout << "Client Name: " << names << endl;
        cout << "Account Number: " << number << endl;
        cout << "Balance: " << balance << "$" << endl;
    }
    void deposit(double amount) 
    {
        balance += amount;
        cout << "Deposit of " << amount << "$ made successfully." << endl;
    }
    void withdraw(double amount) 
    {
        if (balance > amount)
        {
            balance -= amount;
            cout << "Withdrawn " << amount << "$ made successfully." << endl;
        }
        else 
        {
            cout << "Not enough balance to withdraw " << amount << "$" << endl;
        }
    }
};

int main()
{
    string name, num;
	double bal;
    cin >> name;
    cin >> num;
    cin >> bal;

    BankAccount myAccount(name, num, bal);
    myAccount.AccountInfo();

    string answer;
    cout << "You can make 'deposit' or 'withdraw':" << endl;
    cin >> answer;
    if (answer == "deposit")
    {
        cout << "Enter the amount of money you want to deposit:" << endl;
        double dep;
        cin >> dep;
        myAccount.deposit(dep);
        myAccount.AccountInfo();
    }
    else if (answer == "withdraw")
    {
        cout << "Enter the amount of money you want to withdraw:" << endl;
        double draw;
        cin >> draw;
        myAccount.withdraw(draw);
        myAccount.AccountInfo();
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}