#include<iostream>
#include<string>
using namespace std;

// Define structure for student record
struct Student {
    int id;
    string name;
    float gpa;
    int marks[7];  // Array to store 7 marks
};

// Global student record
Student student1 = {1, "John Doe", 3.5, {80, 85, 90, 75, 88, 92, 89}};

// UDF to print student data
void printStudentData(Student student) {
    cout << "Student ID: " << student.id << endl;
    cout << "Student Name: " << student.name << endl;
    cout << "Student GPA: " << student.gpa << endl;
    cout << "Marks: ";
    for (int i = 0; i < 7; i++) {
        cout << student.marks[i] << " ";
    }
    cout << endl << endl;
}

int main() {
    // Local student record
    Student student2 = {2, "Jane Smith", 3.8, {85, 90, 92, 80, 88, 91, 87}};

    // Print data of both students by calling UDF
    cout << "Student 1 Data (Global):\n";
    printStudentData(student1);

    cout << "Student 2 Data (Local):\n";
    printStudentData(student2);

    return 0;
}

