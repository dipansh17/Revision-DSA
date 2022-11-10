#include<bits/stdc++.h>
using namespace std;
void mergeKrdoBro(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first=new int[l1];
    int *second=new int[l2];
    int k=s;
    for(int i=0;i<l1;i++){
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<l2;i++){
        second[i]=arr[k++];
    }
    int i1=0,i2=0;
    k=s;
    while(i1<l1 && i2<l2){
        if(first[i1]<second[i2]){
            arr[k++]=first[i1++];
        }
        else{
            arr[k++]=second[i2++];
        }
    }
    while(i1<l1){
        arr[k++]=first[i1++];
    }
    while(i2<l2){
        arr[k++]=second[i2++];
    }
    delete[] first;
    delete[] second;

}
void mergeSort(int *arr,int s,int e){
    if(s>=e)return;
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    mergeKrdoBro(arr,s,e);
}
int main(){
    int arr[]={9,6,2,5,3,1,4,4,5,4};
    int n=10;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}