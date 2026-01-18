/*
* File: student_grades_refactoring.cpp
* Author: Prachi
* Date: 2026-01-18
* Purpose: This program processes student grades by allowing entry of student names and scores, calculating statistics, and displaying results.
* 
*/
#include<iostream>
using namespace std;

const int MAX_STUDENTS = 10;  // Maximum number of students
const int PASSING_SCORE = 60; // Minimum score to pass
const int PERFECT_SCORE = 100; // Maximum possible score

/*
* This class handles student grade processing including input, calculation, and output.
* here  in function f() input is taken for 10 students only as per original code.
*/
class StudentGradeCalculator {
public:
    int grades[MAX_STUDENTS];
    int totalMarks;

    // function to calculate and display grade
    void calculateGrade() {

        // Taking input of student grades
        for (int i = 0; i < MAX_STUDENTS; i++) {
            cin >> grades[i];
        }

        // Calculating total marks
        totalMarks = 0;
        for (int i = 0; i < MAX_STUDENTS; i++) {
            totalMarks += grades[i];
        }

        cout << totalMarks << endl;

        int average = totalMarks / 10;

        // Assigning grade based on average
        if (average >= 90) {
            cout << "A";
        }
        else if (average >= 75) {
            cout << "B";
        }
        else if (average >= 60) {
            cout << "C";
        }
        else {
            cout << "D";
        }
    }
};

int main() {
    StudentGradeCalculator obj; // created object of the class
    obj.calculateGrade(); // calling the function of the class through created object
    return 0;
}
