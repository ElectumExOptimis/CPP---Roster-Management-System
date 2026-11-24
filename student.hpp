//
//  student.hpp
//  JYM1 TASK 1: CLASS ROSTER Project
//
//  Created by Aron Mengesha on 6/1/24.
//

#pragma once
#include <iostream>
#include <string>
#include "degree.hpp"
using namespace std;

class student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[3];
    DegreeProgram degreeProgram;
    
public:
    student();
    student(string studentID,string firstName,string lastName,string emailAddress,int age,int daysToComplete[],DegreeProgram degreeProgram);
    ~student();
    
    //Getters
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int* getDaysToComplete();
    DegreeProgram getDegreeProgram();
   
    
    //setters
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysToComplete(int daysToComplete[]);
    void setDegreeProgram(DegreeProgram degreeProgram);
        
    
    //Print
    void print();
    
    
    // possible print function for degree type: void printDegree();
    
};


