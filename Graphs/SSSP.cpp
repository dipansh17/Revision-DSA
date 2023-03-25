#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
public:
/*
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
// so here we are finding shortest path

// 1. bfs cycle detection
// 2.parent array mai se nikal lenhy
vector<int> shortestPathBfs(int src,int dest){
    map<int,bool>visited;
    map<int,int>parent;
    queue<int>q;
    q.push(src);
    visited[src]=true;
    parent[src]=-1;
    while (!q.empty())
    {
        int front=q.front();
        q.pop();
        for(auto i:adjlist[front]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
                parent[i]=front;
            }
        }
    }
    vector<int>ans;
    ans.push_back(dest);
    while(parent[dest]!=src){
        ans.push_back(parent[dest]);
        dest=parent[dest];
    }
    ans.push_back(src);
    reverse(ans.begin(),ans.end());
    return ans;
    


}
*/
map<int,list<pair<int,int>>>adjW;
void addEdge(int u,int v,int weight,bool direction){
    // 0->undirected
    // 1->directed
    adjW[u].push_back(make_pair(v,weight));
    if(direction==0){
        adjW[v].push_back(make_pair(u,weight));
    }

}

void printAdjW(){
    for(auto i:adjW){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<"[ "<<j.first<<" , "<<j.second<<" ] ";
        }
        cout<<endl;
    }
}
// Single Source Shortest path
vector<int>TopoSort(int src){
    map<int,int>indegree;

    queue<int>q;

    for(auto i:adjW){
        indegree[i.first]=0;
    }
    for(auto i:adjW){
        for(auto j:i.second){
            indegree[j.first]++;
        }
    }
    for(auto i:indegree){
        if(i.second==0)q.push(i.first);
    
    vector<int>ans;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto i:adjW[front]){
            indegree[i]--;
            if(indegree[i]==0)q.push(i);
        }
    }
    }
return ans;
}

vector<int> SSSP(int src){

    
// step:1 topological sort nikal lo
    vector<int>topoSort=TopoSort(src);

    vector<int>ans(topoSort.size(),INT_MAX);
    ans[src]=0;

    for(auto i:topoSort){
        if(ans[i]!=INT_MAX){
            for(auto j:adjW[i]){
                if(j>i+j.second){
                   j=i+j.second;
                }
            }
        }
    }
return ans;
   

}
};
int main(){

    Graph<int> g;
/*  g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(1,4,0);
    g.addEdge(2,7,0);
    g.addEdge(3,8,0);
    g.addEdge(7,8,0);
    g.addEdge(4,5,0);
    g.addEdge(5,6,0);
    g.addEdge(6,8,0);

    g.printAdj();
     int src=1,dest=8;


    vector<int>ans=g.shortestPathBfs(src,dest);
    for(auto i:ans){
       cout<<i<<" -> ";

    }
    cout<<"NULL";
*/

    g.addEdge(0,1,5,1);
    g.addEdge(0,2,3,1);
    g.addEdge(1,2,2,1);
    g.addEdge(1,3,6,1);
    g.addEdge(2,3,7,1);
    g.addEdge(2,4,4,1);
    g.addEdge(2,5,2,1);
    g.addEdge(3,4,-1,1);
    g.addEdge(4,5,-2,1);
    g.printAdjW();

    vector<int>ans=g.SSSP(0);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}