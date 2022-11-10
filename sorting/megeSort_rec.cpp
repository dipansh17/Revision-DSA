#include<bits/stdc++.h>
using namespace std;
void mergeKrdoBhaiJi(int*arr,int n,int s,int e){

    /*
    -> indexes
    ->new array ->+
    */
    int mid=s+(e-s)/2;
    int len1=mid-s+1; //+1 isliye kuki 0 based indexing h
    int len2=e-mid;
    int *first=new int[len1];
    int *second = new int[len2];
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
 k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }
    int i=0,j=0;
    k=s;
    //mergeing
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[k++]=first[i++];
        }
        else{
            arr[k++]=second[j++];
        }
    }
    while(i<len1){
        arr[k++]=first[i++];
    }
    while(j<len2){
        arr[k++]=second[j++];
    }
    //jo array create kare h unhe delete bhi toh karengy 
    delete[] first;
    delete[] second;

}
void mergeSort(int *arr,int n,int s,int e){
//base case
if(s>=e){
    return ;
}
int mid=s+(e-s)/2;
mergeSort(arr,n,s,mid);
mergeSort(arr,n,mid+1,e);
mergeKrdoBhaiJi(arr,n,s,e);
}
int main(){
int arr[]={2,1,0,4,2,-1};
int n=6;
int s=0,e=n-1;
mergeSort(arr,n,s,e);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}