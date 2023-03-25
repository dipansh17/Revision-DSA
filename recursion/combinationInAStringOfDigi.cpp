#include<bits/stdc++.h>
using namespace std;
void solve(string str,int i,string out){
if(i==str.length()){
cout<<out<<endl;
return ;
}
//exclude space
char ch=str[i];
//noSpace ->put character without space
out.push_back(ch);
solve(str,i+1,out);

//put character with space
out.push_back(' ');
if(str[i+1]!='\0')
solve(str,i+1,out);
 
}
void findSubsequence(int leftSum,int rightSum,char* output,int i,int j){
if(i>j){
    if(leftSum==rightSum)
    cout<<output<<endl;
    return;
}
//put 0,0
output[i]='0';
output[j]='0';
findSubsequence(leftSum,rightSum,output,i+1,j-1);  
//put 0,1
output[i]='0';
output[j]='1';
findSubsequence(leftSum,rightSum+1,output,i+1,j-1);  
//put 1,0
output[i]='1';
output[j]='0';
findSubsequence(leftSum+1,rightSum,output,i+1,j-1);  
//put 1,1
output[i]='1';
output[j]='1';
findSubsequence(leftSum+1,rightSum+1,output,i+1,j-1);  
}
int main(){
    // string str="abcd";
    // string out="";
    // int index=0;
    // solve(str,index,out);

    int n=3;
    char* arr= new char[2*n];
    findSubsequence(0,0,arr,0,2*n-1);
    return 0;

}