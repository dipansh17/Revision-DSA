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
bool isCyclicBfs(int src){
     map<int,bool>visited;
     map<int,int>parent;
     queue<int>q;
     q.push(src);
     visited[src]=true;
     parent[src]=-1;
     while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto i:adjlist[front]){
            if(visited[i]==true && i!=parent[front])return true;
            else if(!visited[i]){
                q.push(i);
                visited[i]=true;
                parent[i]=front;
            }
        }
     }
     return 0; 
}
bool isCyclicDfs(int src,map<int,bool>&visited,int parent){
    visited[src]=true;
    for(auto i:adjlist[src]){
        if(!visited[i]){
            bool cycleDetected=isCyclicDfs(i,visited,src);
            if(cycleDetected==true)return 1;

        }
        else if(visited[i]==true && i!=parent)return 1;
    }
    return 0;
}

bool isCycleDfsDirected(int src,map<int,bool>&visited,map<int,bool>&dfsVisited){
    visited[src]=true;
    dfsVisited[src]=true;
    for(auto i:adjlist[src]){
        if(!visited[i]){
            bool cycleDetected=isCycleDfsDirected(i,visited,dfsVisited);
            if(cycleDetected==true)return true;
        }
        else if(visited[i]==true && dfsVisited[src]==true){
            // cycle present
            return true;
        }
    }
    // backtracking
    dfsVisited[src]=false;

    return false;
}
};
int main(){
Graph<int> g;
// g.addEdge(1,2,0);
// g.addEdge(2,3,0);
// g.addEdge(3,4,0);
// g.addEdge(3,5,0);
// g.addEdge(5,6,0);
// g.addEdge(4,6,0);  
// g.addEdge(6,7,0);
// g.printAdj();

g.addEdge(1,2,1);
g.addEdge(2,3,1);
g.addEdge(2,4,1);
g.addEdge(3,7,1);
// g.addEdge(3,8,1);
// g.addEdge(4,5,1);
// g.addEdge(5,6,1);
// g.addEdge(6,4,1);
g.addEdge(8,7,1);
g.printAdj();


// dfsVisited
map<int,bool>visited,dfsVisited;
cout<<"The graph  is visited or not: "<<g.isCycleDfsDirected(1,visited,dfsVisited);


// map<int,bool>visited;
// int parent=-1;
// // cout<<"The graph is Cyclic or not: "<<g.isCyclicBfs(1)<<endl;
// cout<<"The graph is Cyclic or not: "<<g.isCyclicDfs(1,visited,parent)<<endl;

    return 0;
}