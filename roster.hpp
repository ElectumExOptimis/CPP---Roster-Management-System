//
//  roster.hpp
//  JYM1 TASK 1: CLASS ROSTER Project
//
//  Created by Aron Mengesha on 6/1/24.
//

#pragma once
#include <iostream>
#include <string>
#include <array>
#include "student.hpp"
using namespace std;

class roster{
private:
    int index = -1;
    const static int sizeStudents = 5;
    
public:
    roster();

    
    student* rosterArray[sizeStudents];
    
    void parse(string studentData);
    void add(string studentID, string firstName, string lastName, string emailAddress,int age,int courseDays1,int courseDays2,int courseDays3, DegreeProgram degreeProgram);
    void printByDegree(DegreeProgram degreeProgram);
    void remove(string studentID);
    void printCourseAvgDays(string studentID);
    void printInvalidMail();
    void printAll();
    
    
    ~roster();
    //student** avgStudent(); // use this to return studentArray so i can use it in main printCourseAvgday
};


