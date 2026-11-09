#include <iostream>
using namespace std;

int main()
{
    int number = 25;

    // Store the address of number in a pointer
    int *pointer = &number;

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value stored in pointer: " << pointer << endl;
    cout << "Value through pointer: " << *pointer << endl;

    // Change the value using the pointer
    *pointer = 40;

    cout << "\nNew value of number: " << number << endl;

    return 0;
}
