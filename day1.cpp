#include<list>
#include<iostream>
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
     void printAdjList(){
        for(int i=0; i<V; i++){
            cout<<i<<": ";
             for(int neigh : l[i]){
                cout<< neigh << " ";
             }
             cout << endl;
        }
     }

 } ;

 int main(){
    Graph g(4);

    g.addEdge(0,1); // 2nd fn call
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);

    g.printAdjList(); // 2nd fn call
   
    return 0;
 }
