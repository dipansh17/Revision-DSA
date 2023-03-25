#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int>&st,int ele){
    //base case
    if(st.empty() || st.top()<ele){
        st.push(ele);
        return;
    }
    int topEle=st.top();
    st.pop();
    sortedInsert(st,ele);
    st.push(topEle);
}
void sortStack(stack<int>&st){
    //base case
    if(st.empty()){
        return;
    }
    int topEle=st.top();
    st.pop();
    sortStack(st);
    //sorted way mai insert
      sortedInsert(st,topEle);
}
bool valid(string str){
 stack<char>st;
 for(auto x: str){
    if(x=='(' || x=='[' || x=='{'){
        st.push(x);
    }
    else{
        if(!st.empty()){
            if(x=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else return 0;
            }
            else if(x==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else return 0;
            }
            else{
                if(st.top()=='['){
                    st.pop();
                }
                else return 0;
            }

        }
        else return 0;
    }
   
 }   
  if(st.empty())return 1;
  return 0;
}
//NEXT Smaller element
vector<int>solve(int*arr,int n){
    stack<int>st;
    st.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        while(st.top()!=-1 && st.top()>=arr[i])st.pop();
        //push in ans
        ans[i]=st.top();
        st.push(arr[i]);
    }
    return ans;
}
// previous smaller element
vector<int>PrevSmalllEle(int*arr,int n){
    stack<int>st;
    st.push(-1);
    vector<int>ans(n);
  for(int i=0;i<n;i++){
        while(st.top()!=-1 && st.top()>=arr[i])st.pop();
        //push in ans
        ans[i]=st.top();
        st.push(arr[i]);
    }
    return ans;
}
int main(){
    // stack<int>st;
    // st.push(2);
    // st.push(4);
    // st.push(1);
    // st.push(3);
    // //sort a stack
    // sortStack(st);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }


/*
*balanced/valid parenthesis
*/
// string str="{[])}";
// cout<<valid(str)<<endl;

//NEXT Smaller element
int n=5;
int arr[5]={3,5,2,25,1};
vector<int>ans=PrevSmalllEle(arr,n);
for(auto x:ans){
    cout<<x<<" ";
}

    return 0;
} 