#include <iostream>
#include <vector>
#include "Student.h"
#include "StudentManagement.h"
#include "FileOperations.h"

using namespace std;

const string FILENAME = "students.txt";  // Filename for student data

int main()
{
    vector<Student> students;  // Vector to store all students

    // Load the data from the file at the start
    LoadFromFile(students, FILENAME);

    int choice;
    do
    {
        cout << "\tMenu Options" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search for Student by Id" << endl;
        cout << "4. Update Student Marks" << endl;
        cout << "5. Delete Student Record" << endl;
        cout << "6. Calculate and Display Final Grades" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        case 1:
            AddStudent(students);
            SaveToFile(students, FILENAME);  // Automatically save after adding a student
            break;
        case 2:
            DisplayAllStudents(students);
            break;
        case 3:
            SearchStudentById(students);
            break;
        case 4:
            UpdateStudentMarks(students);
            SaveToFile(students, FILENAME);  // Automatically save after updating
            break;
        case 5:
            DeleteStudent(students);
            SaveToFile(students, FILENAME);  // Automatically save after deleting
            break;
        case 6:
            CalcDispFinalGrades(students);
            break;
        case 7:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    }
    while (choice != 7);  // Repeat until the user chooses to exit

    return 0;
}
