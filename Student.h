#pragma once
#include <string>

using namespace std;

struct Student
{
    string Name;
    int Id;
    float Assigments;
    float Quizes;
    float midterm;
    float FinalExam;
    float FinalGrade;

    //calculate the final grade
    void calculatefinalgrade() 
    {
        FinalGrade = (Quizes * 0.2) + (Assigments * 0.3) + (midterm * 0.2) + (FinalExam * 0.3);
    }
};
