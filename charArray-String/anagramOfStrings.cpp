#include<bits/stdc++.h>
using namespace std;
bool  checkAnagram(string s1,string s2){
    // int freq[26]={0};
unordered_map<char,int>mp;
    for(int i=0;i<s1.length();i++){
        char temp=s1[i];
        // freq[temp-'a']++;
        mp[temp]++;
           }
        for(int i=0;i<s2.length();i++){
        char temp=s2[i];
        // freq[temp-'a']--;
        mp[temp]--;
    }
    // for(int i=0;i<26;i++){
    //     if(freq[i]!=0)return 0;
    // }
    for(auto i: mp){
        if(i.second!=0)return 0;
    } 
    return 1;
}
int main(){
    string s1="panshid";
    string s2="dipansh";
    cout<<"ans is -> "<<checkAnagram(s1,s2)<<endl;
    return 0;
}