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
void bfs(int src, map<int,bool>&visited){
    queue<int>q;
    q.push(src);
    // map<int,bool>visited;
    visited[src]=true;
    while(!q.empty()){
        int front=q.front();
        cout<<front<<",";
        q.pop();
        for(auto i:adjlist[front]){
            if(!visited[i]){
            q.push(i);
            visited[i]=true;
            }
        }
    }
}
void dfs(int src,map<int,bool>&visited){

    visited[src]=true;
    cout<<src<< " ";
    for(auto i:adjlist[src]){
        if(!visited[i]){
            dfs(i,visited);
        }
    }
}
};
int main(){
    Graph<int> g;
    g.addEdge(0,1,0);
    g.addEdge(0,2,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,4,0);
    g.addEdge(2,4,0);
    g.addEdge(2,3,0);
    g.addEdge(10,11,1);
    
    g.printAdj();

/*
    g.addEdge(0,2,0);
    g.addEdge(2,4,0);
    g.addEdge(2,3,0);
    g.addEdge(4,3,0);
    g.addEdge(3,1,0);
*/
    
    //printing bfs
    /*
    cout<<"Printing bfs traversal"<<endl;
     map<int,bool>viited;
    for(auto i:g.adjlist){
        if(!visited[i.first]){
            g.bfs(i.first,visited);
        }
    }
    */
   map<int,bool>visited;
   for(auto i:g.adjlist){
    if(!visited[i.first]){
        g.dfs(i.first,visited);
    }
   }
    
    return 0;

}