#include <iostream>
using namespace std;

int rain_water(int n){

    int leftmax[10000];
    int rightmax[10000];

    int heights[10000];

    for(int i=0;i<n;i++){
        int size;
        cin >> size;
        heights[i] = size;
    }

    leftmax[0] = INT16_MIN;
    rightmax[n-1] = INT16_MIN;

    for(int i=1;i<n;i++){
        leftmax[i] = max(leftmax[i-1],heights[i-1]);
    }

    for(int i=n-2;i>0;i--){
        rightmax[i] = max(rightmax[i+1],heights[i+1]);
    }

    int water=0;

    for(int i=0;i<n;i++){
        int curr_water = min(leftmax[i],rightmax[i]) - heights[i];

       

        if(curr_water > 0){
            water += curr_water;
        }
        else{
            continue;
        }
    }

    return water;

}

int main(){

    int size;

    cin >> size;

    int water_trapped = rain_water(size);

    cout << water_trapped;

}