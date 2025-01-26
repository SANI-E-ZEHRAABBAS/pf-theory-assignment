#include<iostream>
#include<string>
using namespace std;

// Define structure for student record
struct Student {
    int id;
    string name;
    float gpa;
    float percentage;
    int marks[5];  // Array to store 5 marks
};

// UDF to input student data and calculate total marks
int inputAndCalculateMarks(Student &student) {
    cout << "Enter Student ID: ";
    cin >> student.id;

    cin.ignore(); // To clear the buffer before taking the name input
    cout << "Enter Student Name: ";
    getline(cin, student.name);

    cout << "Enter Student GPA: ";
    cin >> student.gpa;

    cout << "Enter Student Percentage: ";
    cin >> student.percentage;

    cout << "Enter 5 marks: ";
    int total = 0;
    for (int i = 0; i < 5; i++) {
        cin >> student.marks[i];
        total += student.marks[i]; // Calculate total of marks
    }
    return total; // Return the total marks
}

int main() {
    // Declare a student variable
    Student student;

    // Call UDF to input data and calculate total marks
    int totalMarks = inputAndCalculateMarks(student);

    // Print the total marks
    cout << "\nTotal marks for " << student.name << " (ID: " << student.id << ") are: " << totalMarks << endl;

    return 0;
}

