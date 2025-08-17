#include <iostream>

using namespace std;

/*In this project we use to functions to create bank system where you can deposit , withdraw
your money and view your balance.*/

void check_balance();
void deposit();
void withdraw();

double balance = 0;

int main()
{

    int function;
    cout << "---------- Welcome to Bank of C++ ----------" << endl;

    do
    {
        cout << "1 --> View your Account Balance \n 2 --> Deposit Money \n 3 --> Withdraw Money \n 4 --> Exit \n"
             << endl;

        cout << "Enter which operation would you like to perform : ";
        cin >> function;

        switch (function)
        {
        case 1:
            check_balance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            break;
        default:
            cout << "Enter Valid Operation";
            break;
        }
    } while (function != 4);

    if (function == 4)
    {
        cout << "Thanks for Visiting C++ Bank";
    }
}

void check_balance()
{
    cout << "You currently have Rupees " << balance << " in your account." << endl;
    cout << "\n";
}

void deposit()
{

    double depo;
    cout << "How much money would you like to deposit : ";
    cin >> depo;

    balance += depo;

    cout << depo << " Rupees added to account" << endl;
    cout << "\n";
}

void withdraw()
{

    double with;
    cout << "How much money would you like to withdraw : ";
    cin >> with;

    if (with > balance)
    {
        cout << "Cannot withdraw due to insuffiecient funds" << endl;
        cout << "\n";
    }
    else
    {
        balance -= with;

        cout << with << " Rupees withdrawn from account" << endl;
        cout << "\n";
    }
}