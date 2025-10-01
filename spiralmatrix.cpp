#include <iostream>
using namespace std;

// In this project we take a matrix from user and print it in spiral format

void spiral(int r,int c){
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << "Value for (" << i << "," << j << ") : ";
            int val;
            cin >> val;
            
            mat[i][j] = val;
        }
    }

    cout << endl;
    cout << "Entered Matrix is : " << endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    int srow = 0 ; int scol = 0;
    int erow = r-1 ; int ecol = c-1;

    cout << "Spiral Form is : " << endl;

    while(srow <= erow && scol <= ecol){
        for(int i=scol;i<=ecol;i++){
            cout << mat[srow][i] << "\t";
        }

        for(int i=srow+1;i<=erow;i++){
            cout << mat[i][ecol] << "\t";
        }

        for(int i=ecol-1;i>=scol;i--){
            cout << mat[erow][i] << "\t";
        }

        for(int i=erow-1;i>=srow;i--){
            cout << mat[i][scol] << "\t";
        }

        srow++;scol++;
        erow--;ecol--;
    }
}

int main(){

    int row,col;

    cin >> row >> col;

    spiral(row,col);

}

