// rotate90.cpp
#include<bits/stdc++.h>
using namespace std;
void rotateArr(int arr[3][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"i: "<<i<<" j: "<<j<<" array is :"<<arr[i][j]<<" another is: "<<arr[j][i]<<endl;
            swap(arr[i][j],arr[j][i]);
            cout<<"i: "<<i<<" j: "<<j<<" array is :"<<arr[i][j]<<" another is: "<<arr[j][i]<<endl;
        }
    }

}
void rev(int arr[3][3],int n){
    for(int i=0;i<n;i++){
        int x=0,y=n-1;
        while(x<y){
            swap(arr[i][x],arr[i][y]);
            x++;
            y--;
        }
    }
}
int main(){
    int n=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotateArr(arr,n);
    cout<<endl;
    cout<<"after swaping"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    /**
     * then reverse the rows
    */
   rev(arr,n);
cout<<"after reversing"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}