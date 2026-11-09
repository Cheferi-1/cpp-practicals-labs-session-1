#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "How many marks do you want to enter? ";
    cin >> size;

    if(size <= 0)
    {
        cout << "Please enter a number greater than zero." << endl;
        return 0;
    }

    // Create an array in dynamic memory
    int *marks = new int[size];

    int total = 0;
    int highest;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];

        total += marks[i];
    }

    highest = marks[0];

    for(int i = 1; i < size; i++)
    {
        if(marks[i] > highest)
            highest = marks[i];
    }

    cout << "\nTotal: " << total << endl;
    cout << "Average: " << static_cast<double>(total) / size << endl;
    cout << "Highest mark: " << highest << endl;

    // Release dynamic memory
    delete[] marks;

    return 0;
}
