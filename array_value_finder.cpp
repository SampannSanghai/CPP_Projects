#include <iostream>
using namespace std;

void num_finder(int array[],int size,int val){
    for(int i=0;i<=size;i++){
        if(array[i] == val){
            cout << "Index of Entered value is : " << i;
            break;
        }
        if(i == size){
            cout << "Entered Value not in Array";
        }

    }
}

int main(){
    //We use this programme to find the index of a value in the array
    //First make an array by entering values then enter the value for which you want to find the index.

    int size;
    int value;

    cout << "Enter size of Array : ";
    cin >> size;

    int array[size];

    for(int i=0;i<size;i++){
        cout << "Enter value for index " << i << " : ";
        cin >> array[i];
    }

    for(int i=0;i<size;i++){
        cout << array[i] << "\t" << endl;
    }
    

    cout << "Enter the value for which you want to find index : ";
    cin >> value;

    num_finder(array,size,value);

}