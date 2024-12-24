#include "FileOperations.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

// Function to save student data to a file
void SaveToFile(const vector<Student>& students, const string& filename) {
    ofstream file(filename);  // Open the file for writing

    for (const auto& student : students) 
    {
        file << student.Id << "," << student.Name << "," << student.Assigments << ","
            << student.Quizes << "," << student.midterm << "," << student.FinalExam << ","
            << student.FinalGrade << endl;
    }
    file.close();
}

// Function to load student data from a file
void LoadFromFile(vector<Student>& students, const string& filename)
{
    ifstream file(filename);
    string line;

    while (getline(file, line))
    {
        istringstream stream(line);  // Use stringstream to split the line by commas
        Student student;
        string token;

        getline(stream, token, ',');
        student.Id = stoi(token);

        getline(stream, student.Name, ',');

        getline(stream, token, ',');
        student.Assigments = stof(token);

        getline(stream, token, ',');
        student.Quizes = stof(token);

        getline(stream, token, ',');
        student.midterm = stof(token);

        getline(stream, token, ',');
        student.FinalExam = stof(token);

        getline(stream, token, ',');
        student.FinalGrade = stof(token);

        students.push_back(student);
    }
    file.close();
}
