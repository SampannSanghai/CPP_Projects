#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    int res=0;
    bool isprime;

    cin >> num;

    for(int i=2;i<=num;i++){
        isprime = true;
        int curr =i;
        for(int j=2;j<=sqrt(i);j++){
            
            
            if(i % j == 0){
                isprime = false;
            }
        }
        if(isprime){
            cout << curr << "\t";
        }
    } 