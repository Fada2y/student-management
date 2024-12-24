#pragma once
#include <vector>
#include <string>
#include "Student.h"

using namespace std;

// Function for saving and loading student data
void SaveToFile(const vector<Student>& students, const string& filename);
void LoadFromFile(vector<Student>& students, const string& filename);
