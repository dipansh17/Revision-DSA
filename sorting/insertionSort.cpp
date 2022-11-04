#include<bits/stdc++.h>
using namespace std;
void insertionSort(int*arr,int n){
    //rounds
    for(int i=1;i<n;i++){
        //shifting
        //and also we have to store the element
        int temp=arr[i],j=i-1;
        for(;j>=0;j--){
              cout<<" Temp is -> "<<temp<<" i is -> "<<i<<"   j is -> "<<j<<"  "<<endl;
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
                 else break;
              cout<<" Temp is -> "<<temp<<" i is -> "<<i<<"   j is -> "<<j<<"  "<<endl;
       
        }
        arr[j+1]=temp;
           cout<<" Temp is -> "<<temp<<" i is -> "<<i<<"   j is -> "<<j<<"  "<<endl;
    }
}
int main(){
    int n=5;
    int arr[5]={-2,45,11,11,-9};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr,n);
    cout<<"after selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}