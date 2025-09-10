#include <iostream>
using namespace std;

int number_reverser(int number){
    int check = number;
    int revnum = 0;

    while(check > 0){
        revnum = revnum*10 + (check%10);
        check /= 10;
    }
    return revnum;
}

int main(){
    int number;
    cout << "Enter a number : ";
    cin >> number;

    int rev_num = number_reverser(number);
    cout << "Reversed number is : " << rev_num;

}