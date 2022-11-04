#include<bits/stdc++.h>
using namespace std;
int solve(int*arr,int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key)return mid;
        else if(arr[mid]<key)s=mid+1;
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    // int n=5;
    // int arr[]={3,5,7,9,11};
    // cout<<solve(arr,n,90)<<endl;
    int n=6;
    int arr[]={1,6,9,11,12,13};
    cout<<solve(arr,n,111)<<endl;
    return 0;
}