#include <iostream>
using namespace std;

int subarray_sum(int n){

    int arr[n];

    for(int i=0;i<n;i++){
        int val=0;
        cin >> val;
        arr[i] = val;
    }

    int curr_sum=0;
    int max_sum=INT16_MIN;

    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        max_sum = max(max_sum,curr_sum);

        if(curr_sum < 0){
            curr_sum = 0;
        }
    }

    return max_sum;

    

}

int main(){

    // In this project we take an array from user and print the max sum out of all subarrays using Kadane's Algorithm
    // This makes time complexity of the algorithm O(n)

    int size;

    cin >> size;

    int maxsum = subarray_sum(size);

    cout << maxsum;

}