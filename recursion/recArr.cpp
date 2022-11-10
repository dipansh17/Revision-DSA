#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr,int n){
    if(n==0 || n==1)return 1;
    if(arr[0]>arr[1])return 0;
    else{
    bool ans=isSorted(arr+1,n-1);
    return ans;
    }
}
int sumIs(int *arr,int n){
    //base case
    if(n==0)return 0;
    if(n==1)return arr[0];
    int sumOfRem=sumIs(arr+1,n-1);
    int sum=arr[0]+sumOfRem;
    return sum;
    }
    bool isPresent(int *arr,int n,int target){
        if(n==0)return 0;
        if(arr[0]==target)return 1;
        if(arr[0]!=target){
            bool ans=isPresent(arr+1,n-1,target);
        return ans;
        }
        return 0;
    }
    void is_present_binary(int *arr,int n,int target,int s,int e){
        if(s>e)return ;
        int mid=(s+e)/2;
        if(arr[mid]==target)cout<<mid<<endl;
        else if(arr[mid]<target)is_present_binary(arr,n,target,mid+1,e);
        else 
is_present_binary(arr,n,target,s,mid-1);
    }
int main(){
    int arr[]={0,1,4,69,4};
    int n=5;
    // cout<<isSorted(arr,n)<<endl;
    //find the sum
    /*
     cout<<"The sum is: "<<sumIs(arr,n)<<endl;
    */
   //find the target(linear Search)
   /*
   int target=1;
   cout<<isPresent(arr,n,target)<<endl;
   */
  //find the target (binarySearch)
  int target=0;
  is_present_binary(arr,n,target,0,n-1);
   
    return 0;
}