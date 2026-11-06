#include <iostream>
using namespace std;

int main()
{
    int score;
    char choice;

    do
    {
        // Enter student score
        cout << "\nEnter student score (0-100): ";
        cin >> score;

        // Validate score
        if (score < 0 || score > 100)
        {
            cout << "Invalid score! Enter a score between 0 and 100." << endl;
        }
        else
        {
            // Determine grade
            if (score >= 80)
            {
                cout << "Grade: A" << endl;
            }
            else if (score >= 70)
            {
                cout << "Grade: B" << endl;
            }
            else if (score >= 60)
            {
                cout << "Grade: C" << endl;
            }
            else if (score >= 50)
            {
                cout << "Grade: D" << endl;
            }
            else
            {
                cout << "Grade: F" << endl;
            }

            // Display pass or fail
            if (score >= 50)
            {
                cout << "Result: PASS" << endl;
            }
            else
            {
                cout << "Result: FAIL" << endl;
            }
        }

        // Ask whether to continue
        cout << "\nEnter another score? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nGrade classification completed!" << endl;

    return 0;
}
