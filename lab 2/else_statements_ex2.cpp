#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 25000;
    double amount;

    do
    {
        // Display ATM menu
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        // Process menu choice
        switch (choice)
        {
            case 1:
                cout << "Your balance is: " << balance << " FCFA" << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount > 0)
                {
                    balance += amount;
                    cout << "Deposit successful!" << endl;
                    cout << "New balance: " << balance << " FCFA" << endl;
                }
                else
                {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount <= 0)
                {
                    cout << "Invalid withdrawal amount!" << endl;
                }
                else if (amount > balance)
                {
                    cout << "Insufficient balance!" << endl;
                }
                else
                {
                    balance -= amount;
                    cout << "Withdrawal successful!" << endl;
                    cout << "Remaining balance: " << balance << " FCFA" << endl;
                }
                break;

            case 4:
                cout << "Thank you for using our ATM!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
