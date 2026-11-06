#include <iostream>
using namespace std;

int main()
{
    int number;
    int i;
    int sum = 0;
    char choice;

    // FOR LOOP: Display multiplication table
    cout << "Enter a number for its multiplication table: ";
    cin >> number;

    cout << "\n===== MULTIPLICATION TABLE =====" << endl;

    for (i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    // WHILE LOOP: Calculate sum
    int limit;

    cout << "\nEnter a limit to calculate the sum: ";
    cin >> limit;

    if (limit >= 1)
    {
        i = 1;

        while (i <= limit)
        {
            sum += i;
            i++;
        }

        cout << "Sum from 1 to " << limit << " = " << sum << endl;
    }
    else
    {
        cout << "Please enter a positive number." << endl;
    }
    
     // DO-WHILE LOOP: Repeat a message
    do
    {
        cout << "\nC++ loops are interesting!" << endl;

        cout << "Display the message again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nProgram completed successfully!" << endl;


    // Display even numbers
cout << "\nEven numbers from 1 to 100:" << endl;

for (int i = 2; i <= 100; i += 2)
{
    cout << i << " ";
}
cout << endl;

// Display odd numbers
cout << "\nOdd numbers from 1 to 100:" << endl;

for (int i = 1; i <= 100; i += 2)
{
    cout << i << " ";
}
cout << endl;

// Calculate factorial
int n;
long long factorial = 1;

cout << "\nEnter a number to calculate factorial: ";
cin >> n;

if (n < 0 || n > 20)
{
    cout << "Enter a number between 0 and 20." << endl;
}
else
{
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;
}

   
    return 0;
}
