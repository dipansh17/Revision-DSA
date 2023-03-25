#include<bits/stdc++.h>
using namespace std;
vector<int>prevSmall(int*arr,int n){
    stack<int>st;
    st.push(-1);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int item=arr[i];
        while(st.top()!=-1 && arr[st.top()]>=item)st.pop();
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
vector<int>nextSmall(int*arr,int n){
    stack<int>st;
    st.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        int item=arr[i];
        while(st.top()!=-1 && arr[st.top()]>=item)st.pop();
        if(st.top()==-1)ans[i]=n;
        else
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
int solve(int*arr,int n){
    vector<int>prev=prevSmall(arr,n);
    vector<int>next=nextSmall(arr,n);
    int maxArea=INT_MIN;
    for(int i=0;i<n;i++){
        int length=arr[i];
        int breadth=next[i]-prev[i]-1;
        int area=length*breadth;
        maxArea=max(maxArea,area);
    }
    return maxArea;
}
int main(){
    int arr[6]={2,1,5,6,2,3};
    int n=6;
    // vector<int>prev=prevSmall(arr,n);
    // cout<<"The prev small ele are:"<<endl;
    // for(auto x:prev){
    //     cout<<x<<" ";
    // }
    //returning largest area
    int solution=solve(arr,n);
    cout<<solution<<endl;
    return 0;
}