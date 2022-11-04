#include<bits/stdc++.h>
using namespace std;
int linearSearch(int *arr,int n,int k){
int ans=-1;
for(int i=0;i<n;i++){
    if(arr[i]==k)ans=i;
}
return ans;
}
void spiralMat(int arr[3][3],int n){
    int startRow=0,startCol=0,endCol=n-1,endRow=n-1;
    while(startRow<=endRow && startCol<=endCol){
        for(int i=startCol;i<=endCol;i++){
            cout<<arr[startRow][i]<<" ";
        }
        startRow++;
        for(int i=startRow;i<=endRow;i++){
            cout<<arr[i][endCol]<<" ";
        }
        endCol--;
        for(int i=endCol;i>=startCol;i--){
            cout<<arr[endRow][i]<<" ";
        }
        endRow--;
        for(int i=endRow;i>=startRow;i--){
            cout<<arr[i][startCol]<<" ";
        }
        startCol++;
    }
}
int main(){
    /*
    int n=5;
    int arr[5]={1,2,3,4,5};
    // 1-> printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // 2-> linear search
    int k=40;
    cout<<linearSearch(arr,n,k)<<endl;
    // 3->
    */
   /*
   *Spiral matrix
   */
  int n=3;
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
   spiralMat(arr,n);
    return 0;
}