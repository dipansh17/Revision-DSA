#include<bits/stdc++.h>
using namespace std;
int firstOcc(int* arr,int n,int key){
int s=0,e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==key){
       
        ans= mid;
         e=mid-1;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

}
return ans;
}
int lastOcc(int* arr,int n,int key){
int s=0,e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==key){
   
        ans=mid;
             s=mid+1;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

}
return ans;
}
int main(){
    int n=5;
    int arr[]={1,3,5,5,7};
    int key=5;
    cout<<firstOcc(arr,n,key)<<endl;
    cout<<lastOcc(arr,n,key)<<endl;
    return 0;
}