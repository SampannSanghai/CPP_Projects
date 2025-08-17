#include <iostream>

using namespace std;

int main(){

    string student_name[5];
    string student_details[5][2];

    cout << "First lets Work on 1D arrays" << endl;
    cout << "Add Names of 5 students -->" << endl;

    for(int i=0;i<=4;i++){
        string name;
        cout << "Enter name of Student " << (i+1) << " : ";
        cin >> student_name[i];
        cout << "\n";
        
    }

    for(int i=0;i<=4;i++){
        cout << "Name of Student " << (i+1) << " is " << student_name[i] << endl;
    }

    cout << "Now Lets Work on 2D Arrays : " << endl;
    cout << "Enter Names of 5 Students as well as their marks" << endl;

    for(int i=0;i<=4;i++){
        string name;
        int marks;
        cout << "Enter Name of Student " << (i+1) << " : " << endl;
        cin >> student_details[i][0];
        cout << "Enter Marks of Student " << (i+1) << " : " << endl;
        cin >> student_details[i][1];

        cout << "\n";

    }

    for(int i=0;i<=4;i++){
        cout << "Name of Student 1 is : " << student_details[i][0] << " and Marks are : " << student_details[i][1] << endl;
    }
}