#include <iostream>
#include <cmath>


using namespace std;


int main(){

    double base;
    double perpendicular;
    double hypotenuse;

    cout << "Enter value of Base in 'cm' : ";
    cin >> base;
    
    cout << "Enter value of Perpendicular in 'cm' : ";
    cin >> perpendicular;

    hypotenuse = sqrt(pow(base,2) + pow(perpendicular,2));

    cout << "Length of Hypotenuse is : " << hypotenuse << " cm";

}






