#include<bits/stdc++.h>
using namespace std;
void rowSum(int arr[3][3],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        cout<<"the Row sum is: "<<i<<" -> "<<sum<<endl;
    }
}
int main(){
    int n=3;
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rowSum(arr,n);
    return 0;

}