#include <iostream>
using namespace std;

int main(){

    float principle,rate;
    int time;
    float intrest;

    cout << "Enter Principle Amount (in Rupees): ";
    cin >> principle;

    cout << "Enter Intrest Rate : ";
    cin >> rate;

    cout << "Enter Time of Loan (in Years): ";
    cin >> time;

    intrest = (principle*rate*time)/100;

    cout << "Total Intrest to be paid on loan is : " << intrest << " rupees";




}