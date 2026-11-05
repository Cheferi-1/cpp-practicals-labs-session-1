#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name, department;
    int age, studentID;
    double fee;
    bool feesPaid;

    // Collect student information
    cout << "Enter Student ID: ";
    cin >> studentID;

    cout << "Enter Full Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter Department: ";
    
   
    getline(cin, department);

    cout << "Enter Registration Fee: ";
    cin >> fee;

    cout << "Have you paid your fees? (1=Yes, 0=No): ";
    cin >> feesPaid;

    // Display registration receipt
    cout << "\n========== STUDENT RECEIPT ==========" << endl;

    cout << "Student ID: " << studentID << endl;
    cout << "Full Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Department: " << department << endl;

    cout << fixed << setprecision(2);
    cout << "Registration Fee: " << fee << " FCFA" << endl;

    cout << "Fees Paid: " << (feesPaid ? "Yes" : "No") << endl;

    cout << "=====================================" << endl;

    return 0;
}
//
//// Code	Meaning
//string	Stores text.
//int	Stores whole numbers.
//double	Stores decimal numbers.
//bool	Stores true or false.
//getline(cin, name)	Reads a complete name, including spaces.
//cin.ignore()	Removes a leftover character from the input buffer.
//fixed	Displays decimal numbers in fixed-point format.
//setprecision(2)	Displays two decimal places.
//? :	Conditional operator.
