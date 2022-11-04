#include<bits/stdc++.h>
using namespace std;
void revArr(char*name){
    int s=0,e=strlen(name)-1;
    while(s<=e){
swap(name[s],name[e]);
s++,e--;
    }
}
int main(){
    char name[]="dipansh ";
    cout<<name<<endl;
    revArr(name);
    cout<<name<<endl;
}