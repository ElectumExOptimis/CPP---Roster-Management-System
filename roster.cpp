//
//  roster.cpp
//  JYM1 TASK 1: CLASS ROSTER Project
//
//  Created by Aron Mengesha on 6/1/24.
//
#include <iostream>
#include <string>
#include "roster.hpp"
#include "student.hpp"
using namespace std;

roster::roster(){
    
};

roster::~roster(){
    for (int i = 0; i < index; i++) {
        delete rosterArray[i];
    }
};

//student** roster::avgStudent(){
//    return rosterArray;
//}

void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int courseDays1, int courseDays2, int courseDays3, DegreeProgram degreeProgram) {
    int daysToComplete[3] = {courseDays1, courseDays2, courseDays3};
    rosterArray[++index] = new student(studentID, firstName, lastName, emailAddress, age, daysToComplete, degreeProgram);
    
}

void roster::parse(string studentData)
{
    string studentID, firstName, lastName, emailAddress;
    int age, courseDays1, courseDays2, courseDays3;
    DegreeProgram degreeProgram;
    
    size_t x = 0;           // a variable ill use to as a starting counter for the pasrse method
    size_t end = studentData.find(',');
    
    studentID = studentData.substr(x, end - x);
    x = end + 1;
    end = studentData.find(',', x);
    
    firstName = studentData.substr(x, end - x);
      x = end + 1;
      end = studentData.find(',', x);

      lastName = studentData.substr(x, end - x);
      x = end + 1;
      end = studentData.find(',', x);

      emailAddress = studentData.substr(x, end - x);
      x = end + 1;
      end = studentData.find(',', x);

      age = stoi(studentData.substr(x, end - x));
      x = end + 1;
      end = studentData.find(',', x);

      courseDays1 = stoi(studentData.substr(x, end - x));
      x = end + 1;
      end = studentData.find(',', x);

      courseDays2 = stoi(studentData.substr(x, end - x));
      x = end + 1;
      end = studentData.find(',', x);

      courseDays3 = stoi(studentData.substr(x, end - x));
      x = end + 1;

      string degreeString = studentData.substr(x);
      if (degreeString == "SECURITY") {
          degreeProgram = SECURITY;
      } else if (degreeString == "NETWORK") {
          degreeProgram = NETWORK;
      } else if (degreeString == "SOFTWARE") {
          degreeProgram = SOFTWARE;
      }
        else {
              cout << "No Valid Degree \n";
      }
    
    add(studentID, firstName, lastName, emailAddress, age, courseDays1, courseDays2, courseDays3, degreeProgram);
    
}

void roster::remove(string studentID){
    bool found = false;
    for (int i = 0; i <= roster::index; i++){
        if (rosterArray[i]->getStudentID() == studentID) {
            found = true;
            if (i < sizeStudents - 1) {
                student* temp = rosterArray[i];
                rosterArray[i] = rosterArray[sizeStudents - 1];
                rosterArray[sizeStudents - 1] = temp;
            }
            roster::index--;
        }
        
    }
    if(found){
        cout << "Student " << studentID << " removed from roster. \n";
        this->printAll();
    }
    else if(!found){
        cout << "Student" << studentID << " not found. \n";
    }
}

void roster::printByDegree(DegreeProgram degreeProgram){
    for (int i = 0; i <= index; i++){
        if (rosterArray[i]->getDegreeProgram() == degreeProgram) {
            rosterArray[i]->print();
        }
    }
}

void roster::printInvalidMail(){
    for (int i = 0; i <= index; i++) {
        string email = rosterArray[i]->getEmailAddress();
        if (email.find(' ') != string::npos || email.find('@') == string::npos || email.find('.') == string::npos){
            cout << "Invalid Email: " << email << endl;
        }
    }
}

void roster::printCourseAvgDays(string studentID){
    for(int i = 0; i <= index; i++){
        if (rosterArray[i]->getStudentID() == studentID) {
            cout << "Student " << studentID << " has averaged: " <<
            ((rosterArray[i]->getDaysToComplete()[0] + rosterArray[i]->getDaysToComplete()[1] + rosterArray[i]->getDaysToComplete()[2]) / 3) << " days in course" << endl;
        }
    }
    
}

void roster::printAll(){
    for (int i = 0; i <= index; i++){
        rosterArray[i]->print();
    }
}
