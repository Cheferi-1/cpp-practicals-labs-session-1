#include <iostream>
#include <string>
using namespace std;

// Create an enumeration
enum Level
{
    HND1 = 1,
    HND2 = 2
};

// Create a student structure
struct Student
{
    string name;
    int age;
    string department;
    Level level;
};

int main()
{
    Student student;

    // Enter student information
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter age: ";
    cin >> student.age;

    cin.ignore();

    cout << "Enter department: ";
    getline(cin, student.department);

    int choice;

    cout << "Select level (1 for HND1, 2 for HND2): ";
    cin >> choice;

    if(choice == 1)
        student.level = HND1;
    else if(choice == 2)
        student.level = HND2;
    else
    {
        cout << "Invalid level!" << endl;
        return 0;
    }

    // Display student information
    cout << "\n--- STUDENT RECORD ---" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;

    if(student.level == HND1)
        cout << "Level: HND 1" << endl;
    else
        cout << "Level: HND 2" << endl;

    return 0;
}
