#include <iostream>

using namespace std;

// In this project wee create a sturcture database and take user input to store details of 5 students

struct student_details{
    string name;
    int marks;
    char grade;
}typedef sd;



int main(){

    sd student1;
    sd student2;
    sd student3;
    sd student4;
    sd student5;

    cout << "Enter Name of Student 1 : ";
    cin >> student1.name;

    cout << "Enter Marks of Student 1 : ";
    cin >> student1.marks;

    cout << "Enter Grade of Student 1 : ";
    cin >> student1.grade;

    cout << "Data of Student 1 Saved !!" << endl;

    cout << "Enter Name of Student 2 : ";
    cin >> student2.name;

    cout << "Enter Marks of Student 2 : ";
    cin >> student2.marks;

    cout << "Enter Grade of Student 2 : ";
    cin >> student2.grade;

    cout << "Data of Student 2 Saved !!" << endl;

    cout << "Enter Name of Student 3 : ";
    cin >> student3.name;

    cout << "Enter Marks of Student 3 : ";
    cin >> student3.marks;

    cout << "Enter Grade of Student 3 : ";
    cin >> student3.grade;

    cout << "Data of Student 3 Saved !!" << endl;

    cout << "Enter Name of Student 4 : ";
    cin >> student4.name;

    cout << "Enter Marks of Student 4 : ";
    cin >> student4.marks;

    cout << "Enter Grade of Student 4 : ";
    cin >> student4.grade;

    cout << "Data of Student 4 Saved !!" << endl;

    cout << "Enter Name of Student 5 : ";
    cin >> student5.name;

    cout << "Enter Marks of Student 5 : ";
    cin >> student5.marks;

    cout << "Enter Grade of Student 5 : ";
    cin >> student5.grade;

    cout << "Data of Student 5 Saved !!" << endl;

    cout << "Now below is the list of entered students with their marks and grades -->" << endl;

    cout << "Name is : " << student1.name << " marks are : " << student1.marks << " grade is : " << student1.grade << endl;
    cout << "Name is : " << student2.name << " marks are : " << student2.marks << " grade is : " << student2.grade << endl;
    cout << "Name is : " << student3.name << " marks are : " << student3.marks << " grade is : " << student3.grade << endl;
    cout << "Name is : " << student4.name << " marks are : " << student4.marks << " grade is : " << student4.grade << endl;
    cout << "Name is : " << student5.name << " marks are : " << student5.marks << " grade is : " << student5.grade << endl;


}