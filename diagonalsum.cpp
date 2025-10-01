#include <iostream>
using namespace std;

int sum(int r,int c){
    int mat[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << "Value for (" << i << "," << j << ") : ";
            int val;
            cin >> val;
            
            mat[i][j] = val;
        }
    }

    int sum=0;

    for(int i=0;i<r;i++){
        sum += mat[i][i];
        if(i != r - i - 1){
            sum += mat[i][r-i-1];
        } 
    }

    return sum;
}

int main(){
    int row;int col;
    cin >> row >> col;

    int ans = sum(row,col);

    cout << ans;
}