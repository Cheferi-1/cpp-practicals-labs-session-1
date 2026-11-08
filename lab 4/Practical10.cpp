#include <iostream>
using namespace std;

// Function for addition
double add(double a, double b)
{
    return a + b;
}

// Function for subtraction
double subtractNumbers(double a, double b)
{
    return a - b;
}

// Function for multiplication
double multiply(double a, double b)
{
    return a * b;
}

// Function for division
double divideNumbers(double a, double b)
{
    return a / b;
}

int main()
{
    double num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";
    cout << "\nChoose an operation: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "Result: " << subtractNumbers(num1, num2) << endl;
            break;

        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;

        case 4:
            if(num2 == 0)
                cout << "Cannot divide by zero." << endl;
            else
                cout << "Result: " << divideNumbers(num1, num2) << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
