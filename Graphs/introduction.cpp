#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Graph{
public:
map<T,list<T>>adjlist;

//add edge
void addEdge(T  u,T v,bool direction){
    // direction 0->undirected Graph
    // direction 1->directed Graph
    adjlist[u].push_back(v);

    // v->u
    if(direction==0){
        adjlist[v].push_back(u);
    }
}

// addjancy matrix
// adjancy list  
void printAdj(){
    for(auto i:adjlist){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<", ";
        }
        cout<<endl;
    }
}
map<T,list<pair<T,T>>>mp;
void addEdgeWeighted(T u,T v,int weight,bool direction){
    // direction 0->undirected Graph
    // direction 1->directed Graph
    mp[u].push_back(make_pair(v,weight));
    if(direction==0){
        mp[v].push_back(make_pair(u,weight));
    }
}
void printAdjW(){
    for(auto i:mp){
        cout<<i.first<<" ->";
        for(auto j:i.second){
            cout<<" { "<< j.first<<","<<j.second<<" }";
        }
        cout<<endl;
    }
}

};
int main(){
    Graph<int> g;
    /*
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,4,0);
    g.addEdge(2,4,0);
    g.addEdge(2,3,0);
    g.printAdj();
    */

    // weighted Graph
    g.addEdgeWeighted(0,1,3,0);
    g.addEdgeWeighted(1,2,2,0);
    g.addEdgeWeighted(1,3,9,0);
    g.addEdgeWeighted(3,4,5,0);
    g.addEdgeWeighted(2,4,10,0);
    g.addEdgeWeighted(2,3,11,0);
    g.printAdjW();
    return 0;
}