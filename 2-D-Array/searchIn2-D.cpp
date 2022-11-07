#include<bits/stdc++.h>
using namespace std;
pair<int,int> search1(int arr[3][3],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int target=5;
    int n=3;
    pair<int,int>p=search1(arr,n,target);
    cout<<p.first<<" "<< p.second<<endl;
    return 0;
}