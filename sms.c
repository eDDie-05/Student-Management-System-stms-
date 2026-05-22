/*
    Student Management System in C

    Features:
    - Add students
    - Delete student records
    - Search by ID
    - Save data to file
    - Load data from file

    Concepts Used:
    - Structures
    - File Handling
    - Arrays
    - Functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structure for Student
struct Student {
    int id;
    char name[50];
    float marks;
};

// Global array
struct Student students[MAX];
int count = 0;

// Function declarations
void loadFromFile();
void saveToFile();
void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();

int main() {
    int choice;

    // Load existing data
    loadFromFile();

    while (1) {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Delete Student\n");
        printf("5. Save Data to File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                saveToFile();
                break;

            case 6:
                saveToFile();
                printf("Data saved. Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Load students from file
void loadFromFile() {
    FILE *file = fopen("students.txt", "r");

    if (file == NULL) {
        return;
    }

    while (fscanf(file, "%d %s %f",
                  &students[count].id,
                  students[count].name,
                  &students[count].marks) != EOF) {
        count++;
    }

    fclose(file);
}

// Save students to file
void saveToFile() {
    FILE *file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %.2f\n",
                students[i].id,
                students[i].name,
                students[i].marks);
    }

    fclose(file);
    printf("Data saved successfully!\n");
}

// Add a student
void addStudent() {
    if (count >= MAX) {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d", &students[count].id);

    printf("Enter Student Name: ");
    scanf("%s", students[count].name);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;

    printf("Student added successfully!\n");
}

// Display all students
void displayStudents() {
    if (count == 0) {
        printf("No student records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("------------------------\n");
    }
}

// Search student by ID
void searchStudent() {
    int id;
    int found = 0;

    printf("Enter Student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nStudent Found!\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
}

// Delete student by ID
void deleteStudent() {
    int id;
    int found = 0;

    printf("Enter Student ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {

            // Shift records left
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }

            count--;
            found = 1;

            printf("Student deleted successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
}