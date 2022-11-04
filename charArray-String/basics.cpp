#include<bits/stdc++.h>
using namespace std;
int getLen(char *arr){
    int i=0,length=0;
    while(arr[i]!='\0'){
length++;  
i++;
    }
    return length;
}
int main(){
    //creation
    // char name[10]="dipansh";
    // char name2[10]="dipansh";
    char src[]="hello";
    char dest[]=" ";
//input
// cin>>name;
//output
// cout<<name; 

//  cout<<"The length of name is: "<<getLen(name)<<endl;

//  cout<<"The length of name is: "<<strlen(name)<<endl;
//compare 2 strings 
// cout<<strcmp(name,name2)<<endl;
cout<<strcpy(dest,src)<<endl;


    return 0;
}