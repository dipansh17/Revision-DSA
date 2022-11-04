#include<bits/stdc++.h>
using namespace std;
int peak(int*arr,int n){
    int s=0,e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int main(){
    int arr[]={0,10,5,2};
    int n=4;
    cout<<peak(arr,n);
    return 0;
}