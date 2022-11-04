// sqrt.cpp
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int x){
    int s=0,e=x;
    int mid=(s+e)/2;
    long long int ans=-1;
    while(s<=e){
        int sq=mid*mid;
if(sq==x)return mid;
else if(sq>x)e=mid-1;
else{
    ans=mid;
    s=mid+1;
}
mid=(s+e)/2;
    }
    return ans;
}
double precision(int x,int pre,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<pre;i++){
        factor=factor/10;
        for(double j=ans;j*j<x;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int x=38;
    int ans=binarySearch(x);
    //adding precison
    
    cout<<precision(x,4,ans);
    // cout<<ans<<endl;
    return 0;
}