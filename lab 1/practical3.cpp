#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    double num1, num2;

    // Collect two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Arithmetic operations
    cout << "\n===== CALCULATOR RESULTS =====" << endl;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0)
    {
        cout << "Division: " << num1 / num2 << endl;
    }
    else
    {
        cout << "Division: Cannot divide by zero!" << endl;
    }

    // Mathematical functions
    if (num1 >= 0)
    {
        cout << "Square root of first number: " << sqrt(num1) << endl;
    }
    else
    {
        cout << "Square root of first number: Not possible for negative numbers." << endl;
    }

    cout << "Power: " << pow(num1, num2) << endl;
    cout << "Minimum: " << min(num1, num2) << endl;
    cout << "Maximum: " << max(num1, num2) << endl;

    // Remainder using integers
    int a, b;

    cout << "\nEnter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    if (b != 0)
    {
        cout << "Remainder: " << a % b << endl;
    }
    else
    {
        cout << "Cannot calculate remainder by zero!" << endl;
    }

    return 0;
}


//+	Addition
//-	Subtraction
//*	Multiplication
///	Division
//%	Remainder
//sqrt()	Calculates square root.
//pow()	Calculates power.
//min()	Returns the smaller value.
//max()	Returns the larger value.
//if	Checks a condition.


