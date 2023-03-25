#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int n,int target){
if(target==0)return 0;
if(target<0)return INT_MAX;

int mini=INT_MAX;
for(int i=0;i<n;i++){
    int ans=solve(arr,n,target-arr[i]);
    if(ans!=INT_MAX)
    mini=min(ans+1,mini);
}
return mini;

}
int main(){
    vector<int>arr{1,2,3};
    int n=arr.size();
    int target=10;
    int ans=solve(arr,n,target);
    cout<<"Ans is: "<<ans<<endl;
    return 0;
}