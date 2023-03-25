#include<bits/stdc++.h>
using namespace std;
int partition(int*arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    //counting how many elements exist <pivot
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)count++;
    }
    //ab pivot ko right pos pr set krdo
    int pi=s+count;
    swap(arr[s],arr[pi]);
    // 2 condition jo thi pivot ke liye 
    // s<pi && pi<e
    int i=s,j=e;
    while(i<pi && j>pi){
        while(arr[i]<=pivot){
            i++;
        }     
        while(arr[j]>pivot){
            j--;
        }
        if(i<pi && j>pi){
            swap(arr[i++],arr[j--]);
        }
    }
    return pi;
}
void quickSort(int *arr,int s,int e){
    //base case
    if(s>=e)return ;
    //partition
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[]={2,4,1,6,9,-1};
    int n=6;
    int s=0,e=n-1;
    quickSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}