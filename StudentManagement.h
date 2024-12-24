#pragma once
#include <vector>
#include "Student.h"

using namespace std;

// Function declarations for managing students
void AddStudent(vector<Student>& students);
void DisplayAllStudents(const vector<Student>& students);
void SearchStudentById(const vector<Student>& students);
void UpdateStudentMarks(vector<Student>& students);
void DeleteStudent(vector<Student>& students);
void CalcDispFinalGrades(const vector<Student>& students);
