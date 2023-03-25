#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
public:
map<int,list<int>>adjlist;
void addEdge(T u,T v,bool direction){
    // 0->undirected
    // 1->directed
    adjlist[u].push_back(v);
    if(direction==0)
    adjlist[v].push_back(u);
}
void printAdj(){
    for(auto i:adjlist){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<" ,";
        }
        cout<<endl;
    }
}
void topoSort(){
    // step-1: find all indegrees
    map<int,int>indegree;

    queue<int>q;

    // so here problem is it is not  printing because map mai entity exist nhi kr rhi isliye pehle init kr dengy
    for(auto i:adjlist){
        indegree[i.first]=0; 
    }

    for(auto i:adjlist){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    // step-2: push in q,indegree->0
    for(auto i:indegree){
        if(i.second==0){
            q.push(i.first);
        }
    }


    // step-3: BFS]
    while(!q.empty()){
        int front=q.front();
        cout<<front<<" ";
        q.pop();
        for(auto i:adjlist[front]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
    cout<<endl;
}
};
int main(){

Graph<int>g;

    g.addEdge(1,3,1);
    g.addEdge(1,2,1);
    g.addEdge(2,5,1);
    g.addEdge(3,5,1);
    g.addEdge(5,4,1);
    g.printAdj();


    cout<<"Printing Topological Sort"<<endl;
    g.topoSort();
    return 0;
}