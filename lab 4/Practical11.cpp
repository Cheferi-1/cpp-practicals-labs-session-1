#include <iostream>
using namespace std;

// Global variable
int schoolYear = 2026;

// Function overloading for two integers
int calculate(int a, int b)
{
    return a + b;
}

// Function overloading for three integers
int calculate(int a, int b, int c)
{
    return a + b + c;
}

// Function overloading for two decimal numbers
double calculate(double a, double b)
{
    return a + b;
}

int main()
{
    // Local variable
    int schoolYear = 2027;

    cout << "Local school year: " << schoolYear << endl;
    cout << "Global school year: " << ::schoolYear << endl;

    cout << "\nSum of two integers: " << calculate(10, 20) << endl;
    cout << "Sum of three integers: " << calculate(10, 20, 30) << endl;
    cout << "Sum of decimal numbers: " << calculate(5.5, 2.5) << endl;

    return 0;
}
