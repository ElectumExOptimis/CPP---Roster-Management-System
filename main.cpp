//
//  main.cpp
//  CLASS ROSTER Project
//
//  Created by Aron Mengesha on 6/1/24.
//

#include <iostream>
#include <string>
#include <array>
#include "roster.hpp"
#include "student.hpp"
#include "degree.hpp"
using namespace std;

int main() {
    
    cout << "SCRIPTING AND PROGRAMMING - APPLICATIONS \n"
    << "Language: C++\n"
    
    cout << endl << endl << endl;
    
    const string studentData[] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Aron,optimis,electumexoptimis@gmail.com,22,30,30,40,SOFTWARE"
    };
    
    const int sizeStudent = 5;
    
    roster classRoster;
    
    for(int i = 0; i < sizeStudent; i++) {
        classRoster.parse(studentData[i]);
    }
    
    cout << "StudentID  | First Name  |  Last Name  |  Email  |  Age  | Day To Complete  | Degree Program  \n\n";    
    classRoster.printAll();
    cout << endl << endl;
    
    
    classRoster.printInvalidMail();
    cout << endl << endl;
    
    
    for (int i = 0; i < sizeStudent; i++) {
            string studentID = "A" + to_string(i + 1);
            classRoster.printCourseAvgDays(studentID);
        }
        cout << endl;

        // Print students by degree program
        cout << "SOFTWARE program:" << endl;
        classRoster.printByDegree(SOFTWARE);
        cout << endl << endl;

        // Remove a student and print the roster
        cout << "Removing student A3:" << endl;
        classRoster.remove("A3");
        cout << endl;

        cout << "students after removal:" << endl;
        classRoster.printAll();
        cout << endl;
    
        classRoster.remove("A3");
        cout << endl << endl;

    
    
    
    //program end
    char exitSign = 'a';
           while (exitSign != 'q') {
               cout << endl << "enter 'q' to quit...";
               cin >> exitSign;
               cout << endl << endl;
           }
        return 0;
   
}
