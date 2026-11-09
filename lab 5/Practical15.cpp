#include <iostream>
#include <algorithm>
using namespace std;

// Find factorial using recursion
long long factorial(int number)
{
    if(number <= 1)
        return 1;

    return number * factorial(number - 1);
}

int main()
{
    int number;
    int marks[5] = {70, 45, 90, 60, 80};

    cout << "Enter a number from 0 to 20: ";
    cin >> number;

    if(number < 0 || number > 20)
    {
        cout << "Number must be between 0 and 20." << endl;
        return 0;
    }

    cout << "Factorial: " << factorial(number) << endl;

    // Sort marks from lowest to highest
    sort(marks, marks + 5, [](int a, int b)
    {
        return a < b;
    });

    cout << "\nMarks in ascending order: ";

    for(int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;

    return 0;
}
