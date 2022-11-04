#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int*arr,int n){
    bool flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ 
                swap(arr[j],arr[j+1]);
                //optimisation->
                flag=1;
            }
        }
        //optimisation->
        if(flag==0)break;
    }
}
int main(){
    int n=5;
    int arr[5]={-2,45,0,11,-9};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr,n);
    cout<<"after selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}