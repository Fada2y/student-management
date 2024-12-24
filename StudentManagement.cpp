#include "StudentManagement.h"
#include <iostream>

using namespace std;

// Function to add a new student to the system
void AddStudent(vector<Student>& students)
{
    Student newstudent;
    cout << "Enter a student Id: ";
    cin >> newstudent.Id;
    cin.ignore(); // To use getline after cin
    cout << "Enter a student name: ";
    getline(cin, newstudent.Name);

    // Taking grades from the user
    cout << "Enter assignment mark of the student: ";
    cin >> newstudent.Assigments;
    cout << "Enter quiz mark of the student: ";
    cin >> newstudent.Quizes;
    cout << "Enter midterm mark of the student: ";
    cin >> newstudent.midterm;
    cout << "Enter final exam mark of the student: ";
    cin >> newstudent.FinalExam;

    // Calculate the final grade
    newstudent.calculatefinalgrade();

    // Add the new student to the vector
    students.push_back(newstudent);
}

// Function to display all students
void DisplayAllStudents(const vector<Student>& students) 
{
    for (const auto& student : students) 
    {
        cout << "Name: " << student.Name << ", ID: " << student.Id << ", Final Grade: " << student.FinalGrade << endl;
    }
}

// Function to search for a student by ID
void SearchStudentById(const vector<Student>& students)
{
    int id;
    cout << "Enter the student ID to search: ";
    cin >> id;
    for (const auto& student : students) 
    {
        if (student.Id == id) 
        {
            cout << "Name: " << student.Name << ", Final Grade: " << student.FinalGrade << endl;
            return;
        }
    }
    cout << "Student with ID " << id << " not found." << endl;
}

// Function to update student marks
void UpdateStudentMarks(vector<Student>& students)
{
    int id;
    cout << "Enter ID of student to update: ";
    cin >> id;
    for (auto& student : students)
    {
        if (student.Id == id)
        {
            cout << "Enter new assignment grade: ";
            cin >> student.Assigments;
            cout << "Enter new quiz grade: ";
            cin >> student.Quizes;
            cout << "Enter new midterm grade: ";
            cin >> student.midterm;
            cout << "Enter new final exam grade: ";
            cin >> student.FinalExam;

            // Recalculate the final grade
            student.calculatefinalgrade();
            cout << "Marks updated successfully!" << endl;
            return;
        }
    }
    cout << "Student with ID " << id << " not found." << endl;
}

// Function to delete a student by ID
void DeleteStudent(vector<Student>& students) 
{
    int id;
    cout << "Enter ID of student to delete: ";
    cin >> id;
    for (auto it = students.begin(); it != students.end(); ++it) 
    {
        if (it->Id == id) {
            students.erase(it);  // Remove the student from the vector
            cout << "Student with ID " << id << " deleted successfully!" << endl;
            return;
        }
    }
    cout << "Student with ID " << id << " not found." << endl;
}

// Function to calculate and display final grades
void CalcDispFinalGrades(const vector<Student>& students)
{
    for (const auto& student : students) 
    {
        cout << "Name: " << student.Name << ", ID: " << student.Id << ", Final Grade: " << student.FinalGrade << endl;
    }
}
