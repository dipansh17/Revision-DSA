#include<bits/stdc++.h>
using namespace std;
void colSum(int arr[][3],int n,int m){
    int maxi=INT_MIN;
    for(int i=0;i<m;i++){
        int sum=0;
        
        for(int j=0;j<n;j++){
            sum+=arr[j][i];
        }
        cout<<"The sum of "<<i <<" is "<<sum<<endl;
        maxi=max(maxi,sum);
    }
    cout<<"The Max ColSum is: "<<maxi<<endl;

}

int main(){
    int n=3,m=3;
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the col sum of the array is: "<<endl;
    colSum(arr,n,m);
    return 0;
}