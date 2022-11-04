#include<bits/stdc++.h>
using namespace std;
void spiralMat(int arr[6][3],int n){
    int startRow=0,startCol=0,endCol=n-1,endRow=6-1;
    while(startRow<=endRow && startCol<=endCol){
        //we have to go to from stating row to ending col
        for(int i=startCol;i<=endCol;i++){
            cout<<arr[startRow][i]<<" ";
        }
        startRow++;
        //we have to go to end col
        for(int i=startRow;i<=endRow;i++){
            cout<<arr[i][endCol]<< " ";
        }
        endCol--;
        //we have to go to ending row 
        for(int i=endCol;i>=startCol;i--){
            cout<<arr[endRow][i]<<" ";
        }
        endRow--;
        //we have to go to starting col
        for(int i=endRow;i>=startRow;i--){
            cout<<arr[i][startCol]<< " ";
        }
        startCol++;
    }
}
int main(){
    int n=3;
     int arr[6][3]={{1,2,3},{4,5,6},{7,8,9},{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<6;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralMat(arr,n);
    return 0;
}