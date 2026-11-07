#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string name;

    // Enter student's name
    cout << "Enter your full name: ";
    getline(cin, name);

    // Convert name to uppercase
    for(int i = 0; i < name.length(); i++)
    {
        name[i] = toupper(name[i]);
    }

    cout << "\nYour name: " << name << endl;
    cout << "Number of characters: " << name.length() << endl;

    return 0;
}
