#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=5;
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    int n;
    cin>>n;
    // int*arr=new int[n];
    // for(int i=0;i<n;i++){
    // cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    // cout<<arr[i]<<" ";
    // }

    //2-d array
    // int*ptr=new int[n];
    int**ptr1=new int*[n];

    for(int i=0;i<n;i++){
        ptr1[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ptr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ptr1[i][j]<<" ";
        }
        cout<<endl;
    }
//delete allocated memeory
for(int i=0;i<n;i++)delete[]ptr1[i];
delete[]ptr1;

    return 0;
}