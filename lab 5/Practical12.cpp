#include <iostream>
using namespace std;

// Swap two values using references
void swapValues(int &a, int &b)
{
    int temporary = a;
    a = b;
    b = temporary;
}

// Add five to a value using a reference
void addFive(int &number)
{
    number = number + 5;
}

int main()
{
    int first, second;

    cout << "Enter first number: ";
    cin >> first;

    cout << "Enter second number: ";
    cin >> second;

    cout << "\nBefore swapping: " << first << " and " << second << endl;

    swapValues(first, second);

    cout << "After swapping: " << first << " and " << second << endl;

    addFive(first);

    cout << "First number after adding 5: " << first << endl;

    return 0;
}
