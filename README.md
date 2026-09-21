# Student Management System in C

A simple **Student Management System** developed using the **C programming language**. The system allows users to manage student records through a command-line interface.

## Features

* Add new student records
* Display all students
* Search for a student
* Update student information
* Delete student records
* Store student information using file handling
* Calculate and display student grades
* Simple command-line menu
* Persistent data storage

## Student Information

Each student record can contain:

* Student ID
* Full Name
* Age
* Gender
* Course
* Department
* Marks
* Grade

## Technologies Used

* **Programming Language:** C
* **Compiler:** GCC
* **Interface:** Command Line / Terminal
* **Storage:** File handling

## Project Structure

```text
student-management-system/
│
├── main.c
├── students.dat
└── README.md
```

## How to Run

### 1. Clone or download the project

```bash
git clone <your-repository-url>
cd student-management-system
```

### 2. Compile the program

Using GCC:

```bash
gcc main.c -o student_management
```

### 3. Run the program

On macOS/Linux:

```bash
./student_management
```

On Windows:

```bash
student_management.exe
```

## Example Menu

```text
====================================
      STUDENT MANAGEMENT SYSTEM
====================================

1. Add Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Exit

Enter your choice:
```

## File Handling

The system uses C file handling to save student records so that information can remain available after the program is closed.

Common file functions used include:

```c
fopen()
fclose()
fread()
fwrite()
fprintf()
fscanf()
```

## Concepts Demonstrated

This project demonstrates important C programming concepts such as:

* Variables and data types
* Structures (`struct`)
* Functions
* Arrays
* Pointers
* Conditional statements
* Loops
* String handling
* File handling
* Menu-driven programming

## Sample Student Record

```text
Student ID : 1001
Name       : John Doe
Age        : 21
Gender     : Male
Course     : Computer Science
Department : ICT
Marks      : 85
Grade      : A
```

## Possible Future Improvements

The system can be expanded with:

* Student login accounts
* Teacher management
* Course management
* Attendance tracking
* Fee management
* Examination results
* GPA calculation
* Report generation
* Password protection
* Database integration

## Author

**Student Management System**

Developed as a C programming project for learning and demonstrating programming fundamentals.

## License
eDDie

This project is intended for educational purposes.
