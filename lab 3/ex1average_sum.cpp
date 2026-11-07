#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0;
    int highest, lowest;
    double average;

    // Enter five marks
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> marks[i];

        sum += marks[i];
    }

    highest = marks[0];
    lowest = marks[0];

    // Find highest and lowest marks
    for(int i = 1; i < 5; i++)
    {
        if(marks[i] > highest)
            highest = marks[i];

        if(marks[i] < lowest)
            lowest = marks[i];
    }

    average = sum / 5.0;

    cout << "\nTotal marks: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Highest mark: " << highest << endl;
    cout << "Lowest mark: " << lowest << endl;

    return 0;
}
