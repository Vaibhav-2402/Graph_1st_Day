// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph {
    public:
    unordered_map<int, list<int> > adj;
    
    void addEdge(int u, int v, bool direction) {
        //direction -> 0 undirected graph
        //direction -> 1 directed graph
        
        adj[u].push_back(v);
        if(direction == 0) {
            adj[v].push_back(u);
        }
    }
    
    void printAdjList() {
        for(auto i : adj) {
            cout << i.first << "->";
            for(auto j : i.second) {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

int main() {
    
    graph g;
    int m , n;
    
    cout << "Enter number of Nodes : " ;
    cin >> m;
    
    cout << "\n Enter number of edges : ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        
        g.addEdge(u,v, 0);
    }
    
    g.printAdjList();

    return 0;
}