//
//  student.cpp
//  JYM1 TASK 1: CLASS ROSTER Project
//
//  Created by Aron Mengesha on 6/1/24.
//
#include <iostream>
#include <string>
#include "student.hpp"
#include "degree.hpp"
using namespace std;

//default constructor
student::student(){
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    for (int i = 0; i < 3; i++){
        this->daysToComplete[i] = 0; //array
    }
    this->degreeProgram = SOFTWARE; // SOFTWARE will be the default degree
}
//main constructor
student::student(string studentID, string firstName,string lastName,string emailAddress,int age,int daysToComplete[],DegreeProgram degreeProgram){
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; i++){
        this->daysToComplete[i] = daysToComplete[i];
    }
        this->degreeProgram = degreeProgram;
}
student::~student(){};

//getters
string student::getStudentID(){
    return studentID; }
string student::getFirstName(){
    return firstName; }
string student::getLastName(){
    return lastName; }
string student::getEmailAddress(){
    return emailAddress; }
int student::getAge(){
    return age; }
int* student::getDaysToComplete(){
    return this->daysToComplete; }
DegreeProgram student::getDegreeProgram(){
    return degreeProgram;}

//setters
void student::setStudentID(string studentID){
    this->studentID = studentID;
}
void student::setFirstName(string firstName){
    this->firstName = firstName;
}
void student::setLastName(string lastName){
    this->lastName = lastName;
}
void student::setEmailAddress(string emailAddress){
    this->emailAddress = emailAddress;
}
void student::setAge(int age){
    this->age = age;
}
void student::setDaysToComplete(int dayToComplete[]){
    for(int i = 0; i < 3; i++){
        this->daysToComplete[i] = daysToComplete[i]; }
}
void student::setDegreeProgram(DegreeProgram degreeProgram){
    this->degreeProgram = degreeProgram;
}

//PRINT FUNCTIONS


// print all
void student::print(){
    cout << "Student ID: " << studentID << "\t";
    cout << "First Name: " << firstName << "\t";
    cout << "Last Name: " << lastName << "\t";
    cout << "Email: " << emailAddress << "\t";
    cout << "Age:" << age << "\t";
    cout << "Days To Complete: " << daysToComplete[0] << ", " << daysToComplete[1] << ", " << daysToComplete[2] << "\t";
    cout << "Degree: "; 
    if (degreeProgram == SECURITY) {
        cout << "SECURITY \n";
    } else if (degreeProgram == NETWORK) {
        cout << "NETWORK \n";
    } else if (degreeProgram == SOFTWARE) {
        cout << "SOFTWARE \n";
    } else {
        cout << "NO VALID DEGREE \n";
    }
    
};


