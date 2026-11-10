#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100;

struct Student
{
    int id;
    string name;
    string department;
    double score;
};

Student students[MAX_STUDENTS];
int studentCount = 0;

// Find a student by ID
int findStudent(int id)
{
    for(int i = 0; i < studentCount; i++)
    {
        if(students[i].id == id)
            return i;
    }

    return -1;
}

// Add a student
void addStudent()
{
    if(studentCount >= MAX_STUDENTS)
    {
        cout << "The student list is full." << endl;
        return;
    }

    Student newStudent;

    cout << "Enter student ID: ";
    cin >> newStudent.id;

    if(findStudent(newStudent.id) != -1)
    {
        cout << "This ID already exists." << endl;
        return;
    }

    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, newStudent.name);

    cout << "Enter department: ";
    getline(cin, newStudent.department);

    cout << "Enter score (0-100): ";
    cin >> newStudent.score;

    if(newStudent.score < 0 || newStudent.score > 100)
    {
        cout << "Invalid score. Student was not added." << endl;
        return;
    }

    students[studentCount] = newStudent;
    studentCount++;

    cout << "Student added successfully." << endl;
}

// Display all students
void displayStudents()
{
    if(studentCount == 0)
    {
        cout << "No student records available." << endl;
        return;
    }

    cout << "\n--- STUDENT RECORDS ---" << endl;

    for(int i = 0; i < studentCount; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Department: " << students[i].department << endl;
        cout << "Score: " << students[i].score << endl;
    }
}

// Search for a student
void searchStudent()
{
    int id;

    cout << "Enter student ID to search: ";
    cin >> id;

    int position = findStudent(id);

    if(position == -1)
    {
        cout << "Student not found." << endl;
        return;
    }

    cout << "\nStudent found." << endl;
    cout << "Name: " << students[position].name << endl;
    cout << "Department: " << students[position].department << endl;
    cout << "Score: " << students[position].score << endl;
}

// Update a student's score
void updateStudent()
{
    int id;

    cout << "Enter student ID to update: ";
    cin >> id;

    int position = findStudent(id);

    if(position == -1)
    {
        cout << "Student not found." << endl;
        return;
    }

    double newScore;

    cout << "Enter new score (0-100): ";
    cin >> newScore;

    if(newScore < 0 || newScore > 100)
    {
        cout << "Invalid score." << endl;
        return;
    }

    students[position].score = newScore;

    cout << "Student score updated successfully." << endl;
}

// Delete a student record
void deleteStudent()
{
    int id;

    cout << "Enter student ID to delete: ";
    cin >> id;

    int position = findStudent(id);

    if(position == -1)
    {
        cout << "Student not found." << endl;
        return;
    }

    for(int i = position; i < studentCount - 1; i++)
    {
        students[i] = students[i + 1];
    }

    studentCount--;

    cout << "Student deleted successfully." << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT ACADEMIC MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Search student" << endl;
        cout << "4. Update student score" << endl;
        cout << "5. Delete student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Thank you for using the system." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while(choice != 6);

    return 0;
}
