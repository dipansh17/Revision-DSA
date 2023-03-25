#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    //base case
    if(n<=1)return n;

    return solve(n-1)+solve(n-2);
}

// rec+memoization
int solveMem(int n,vector<int>&dp){
    //base case
    if(n<=1)return n;
    //step-3
    if(dp[n]!=-1)return dp[n];
    // step-2
    return dp[n]= solveMem(n-1,dp)+solveMem(n-2,dp);
}

// bottom's up
//step-1 dp array creation
//step-2 base case analysis of rec code and update dp array accordingly
// step-3 find the range for the changing variable and copy paste the logic in rec code accordingly
int solveTab(int n){
    //step1:create a dp array
    vector<int>dp(n+1,0);
    //step-2 -->base case and update dp array
    dp[0]=0;
    dp[1]=1;
    // /step-3 find range and copy paste
    for(int i=2;i<=n;i++){
             dp[i]= dp[i-1]+dp[i-2];
    }
    return dp[n];

}
int main(){
    int n=16;
    // int ans=solve(n);
    // vector<int>dp(n+1 ,-1);
    // // int ans=solveMem(n,dp);
    int ans=solveTab(n); 
    cout<<ans<<endl;
    return 0;
}