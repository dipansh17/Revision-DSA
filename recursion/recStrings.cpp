#include<bits/stdc++.h>
using namespace std;
void rev(string& s,int st,int e){
if(st>e)return ;
swap(s[st],s[e]);
rev(s,st+1,e-1);
}
bool check_pallin(string str,int i,int j){
if(i>j)return true;
if(str[i]!=str[j])return false;
else{
    return check_pallin(str,i+1,j-1);
}

}
int fastExpo(int base,int expo){
    if(expo==0)return 1;
    if(expo==1)return base;
    int ans=fastExpo(base,expo/2);
    if(expo&1)return base*ans*ans;
    else{
        return ans*ans;
    }
}
void solve(int*arr,int n){
    if(n==0|| n==1)return ;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);
    }
    solve(arr,n-1);
}

int main(){
    // string s="nagan";
    // rev(s,0,s.length()-1);
    // cout<<s<<endl;
    // cout<<check_pallin(s,0,s.length()-1)<<endl;
    // cout<<fastExpo(2,15)<<endl;
    //bubble sort
    int arr[]={9,6,2,5,3,1,4,4,5,4};
    int n=10;
    solve(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}