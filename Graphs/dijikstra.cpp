#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
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
        vector<int>dijikstra(int src,int n){
            vector<int>dist(n,INT_MAX);
            set<pair<int,int>>st;

            // initiali step
            dist[src]=0;
            st.insert(make_pair(0,src));

            while(!st.empty()){
                // step-1 get the top element
                auto top=*(st.begin());
                // pop
                st.erase(st.begin());

                int nodeDistance=top.first;
                int node=top.second;

                // step-2 store neighbour 
                for(auto i:adjW[node]){
                    if(nodeDistance+i.second<dist[i.first]){
                        // remove old record
                       auto record=st.find(make_pair(dist[i.first],i.first));
                    //    if record found then erase it
                    if(record!=st.end()){
                        st.erase(record);
                    }
                    // dist update
                    dist[i.first]=nodeDistance+i.second;

                    // push new record
                    st.insert(make_pair(dist[i.first],i.first));
                    }
                }
            }
            return dist;
        }
};
int main(){
    Graph g;
    // g.addEdge(0,1,5,0);
    // g.addEdge(0,2,8,0);
    // g.addEdge(1,2,9,0);
    // g.addEdge(1,3,2,0);
    // g.addEdge(2,3,6,0);
    // g.printAdjW();

        g.addEdge(1,2,5,0);
        g.addEdge(1,3,15,0);
        g.addEdge(2,3,6,0);
        g.addEdge(3,4,2,0);
        g.printAdjW();
    cout<<endl;
    vector<int>ans=g.dijikstra(1,5);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}