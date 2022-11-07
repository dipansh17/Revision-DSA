#include<bits/stdc++.h>
using namespace std;
int powerOf2(int n){
    if(n==0)return 1;
    return 2*powerOf2(n-1);
}
int fastExpo(int base,int power){
    if(power==0)return 1;
    int fasti=fastExpo(base,power/2);
    if(power&1){
        return base*fasti*fasti;
    }
    else{
       return fasti*fasti;
    }
}
int fibo(int n){
    if(n==1 || n==0)return n;
    return fibo(n-1)+fibo(n-2);
    }
    int nStair(int n){
        if(n<0)return 0;
        if(n==0)return 1;
        int ans=nStair(n-1)+nStair(n-2);
        return ans;
    }
    void sayDigit(int n,string *arr){
        if(n==0)return ;
        int digit=n%10;
        n=n/10;
        //call
        sayDigit(n,arr);
        cout<<arr[digit]<<" ";
    }
int main(){
    //power of 2;
    /*
    int n=10;
    cout<<powerOf2(n)<<endl;
    */
   //fast expo
   /*
   int base=2,power=12;
    cout<<fastExpo(base,power)<<endl;
    */
   //fibonaaci
   /*
   int n=8;
   cout<<fibo(n)<<endl;
   */
  //n-Stair
  /*
  cout<<nStair(5)<<endl;
  */
//say digit
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int n=101;
sayDigit(n,arr);
    return 0;
}