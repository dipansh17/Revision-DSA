#include<bits/stdc++.h>
using namespace std;
void printWave(int arr[3][3],int n){
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        if(i%2==0){
            for(int j=n;j>0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n=3;
    printWave(arr,n);
    return 0;
}