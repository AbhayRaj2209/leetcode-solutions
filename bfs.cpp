#include<list>
#include<iostream>
#include<queue>
using namespace std;
 class Graph{
    int V;
     list<int>*l; // int *arr;

     // constructor
     public:
     Graph(int V){
     this->V= V;
     l= new list<int> [V];
     // arr= new int[v]
 }

 void addEdge(int u, int v){ //first function
    l[u].push_back(v);
    l[v].push_back(u);
 }
     void bfs(){ // bfs traversal imp part of code for bfs
        queue<int>Q;
        vector<bool>vis(V, false);
        Q.push(0);
        vis[0]= true;

        while(Q.size()>0) {
            int u = Q.front(); // u-v
            Q.pop();
            cout<<u<<" ";

             for(int v: l[u]) { // v--> immediate neighbour.
                if(!vis[v]){
                    vis[v]= true;
                    Q.push(v);
                }
             }
        }
          cout<< endl;

     }

 } ;

 int main(){
    Graph g(5);

    g.addEdge(0,1); // 2nd fn call
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    
     g.bfs(); // bfs function call kiya h yha
    return 0;
 }
