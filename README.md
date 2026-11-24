# C++ Student Roster Management System

A C++ console application designed to manage student enrollment records for a university course. The application reads student information, creates student objects, and provides functionality to organize, search, validate, and display roster data.

## Overview

This project demonstrates object-oriented programming in C++, including classes, constructors, destructors, arrays, enumerations, pointers, and data manipulation.

The application maintains a roster of five students and tracks their enrollment information, degree programs, and the number of days required to complete three courses.

## Features

- **Student Records:** Stores student ID, first name, last name, email, age, course completion days, and degree program.
- **Data Parsing:** Reads comma-separated student records and creates student objects.
- **Roster Management:** Adds, displays, and removes students from the roster.
- **Email Validation:** Identifies invalid email addresses.
- **Course Statistics:** Calculates the average number of days each student takes to complete three courses.
- **Degree Program Filtering:** Displays students enrolled in a selected degree program.
- **Console Output:** Displays student records and roster operations directly in the terminal.

## Technologies

- C++
- Standard C++ Library
- Object-Oriented Programming
- Arrays and Pointers
- Enumerations
- Console-Based Application

No third-party libraries are required.

## Project Structure

```text
Student-Roster/
├── main.cpp
├── student.hpp
├── student.cpp
├── roster.hpp
├── roster.cpp
└── degree.hpp
```

## Class Overview

### Student Class

Represents an individual student and manages their information through private data members, constructors, getters, setters, and a print function.

### Roster Class

Manages the collection of student records. It parses student data, adds and removes students, validates email addresses, calculates average course completion days, and filters students by degree program.

### Degree Program

Defines the available degree programs:

- SECURITY
- NETWORK
- SOFTWARE

## How to Compile and Run

Make sure a C++ compiler such as `g++` is installed.

**Compile the source files:**

```bash
g++ -std=c++11 main.cpp student.cpp roster.cpp -o StudentRoster
```

**Run on macOS or Linux:**

```bash
./StudentRoster
```

**Run on Windows:**

```bash
StudentRoster.exe
```

## Project Purpose

This project demonstrates practical C++ programming concepts through a student roster application, with an emphasis on object-oriented design, data parsing, memory management, and console-based data processing.
