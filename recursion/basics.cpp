#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0)return 1;
    //processing 
    //recursive  
    return n*fact(n-1);
}
void counting(int n){
    if(n==0) return ;
    //head recursion
    counting(n-1);
    cout<<n<<" ";
}
void revCounting(int n){
    if(n==0)return;
    cout<<n<<" ";
    //tail recursion
    revCounting(n-1);
}
void maxNum(int*arr,int n,int index,int &ans){
    if(index==n)return ;
    ans=max(ans,arr[index]);
    maxNum(arr,n,index+1,ans);
 
}
int fastExpo(int base,int expo){
    if(expo==0)return 1;
    int choti=fastExpo(base,expo/2);
    if(expo&1){
        return base*choti*choti;
    }
    else{
        return choti*choti;
    }
}
int main(){
    // int n=10; 

    // // cout<<"the result of factorial is: "<<fact(n)<<endl;
    // counting(n);
    // cout<<endl;
    // revCounting(n);
    int arr[7]={4,2,6,9,1,0,12};
    int n=7;
    // int index=0,ans=INT_MIN;
    // maxNum(arr,n,index,ans);
    // cout<<ans;

    //fast exponentiation
    int base=7,expo=0 ;
    cout<<fastExpo(base,expo);
    return 0;
}