#include <iostream>
using namespace std;

/* in this program we design a program that checks whethter 
the inputed credit card number is valid or not using the Luhns Algorithm */

int get_digit(int num);
int sum_even(string num);
int sum_odd(string num);


int main(){

    string number;
    cout << "Enter Credit Card Number : ";
    cin >> number;

    


    int result_sum = sum_even(number) + sum_odd(number);

    if(result_sum % 10 == 0){
        cout << "Valid Credit Card Number";
    }
    else{
        cout << "Invalid Credit Card Number";
    }
    
    
}

int get_digit(int num){
    return num%10 + (num/10)%10;
}

int sum_even(string num){
    int sum =0;
    for(int i = num.size() - 2 ; i>=0 ; i-=2){
        sum += get_digit(2*(num[i] - '0'));
    }
    cout << sum << endl;
    return sum;
}

int sum_odd(string num){
    int sum=0;
    for(int i = num.size() - 1 ; i>=0 ; i-=2){
        sum += num[i] - '0';
    }
    cout << sum << endl;
    return sum;

}