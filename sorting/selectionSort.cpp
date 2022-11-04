#include<bits/stdc++.h>
using namespace std;
//t.c->O(N^2)
// S.C->O(1)
void selectionSort(int*arr,int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
           if(arr[j]<arr[mini])mini=j;
        }
        swap(arr[i],arr[mini]);
    }
}
int main(){
    int n=5;
    int arr[5]={4,5,2,1,3};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    selectionSort(arr,n);
    cout<<"after selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}