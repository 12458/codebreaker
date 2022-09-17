#include <bits/stdc++.h>

using namespace std;

/*
Our approach:
1. we find all the paths to reach building N from 1 (the airport)
2. we find the shortest (least nodes needed to traverse) path among these paths
3. get min of the graph weights (minimum number of questions that must be prepared)
*/

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<tuple <int, int>> adj[], int u, int v, int w){
    tuple <int, int> dir(v, w);
    adj[u].push_back(dir);
    dir = make_tuple(u, w);
    adj[v].push_back(dir);
}
 
// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<tuple <int, int>> adj[], int V){
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << get<0>(x) << get<1>(x);
        printf("\n");
    }
}

int main(){
    int N, E, K; //N: target building ; E: lines ; K: max hops
    cin >> N >> E >> K;
    cout << N << E << K << "\n";
    vector<tuple <int, int>> adj[N];
    for (int i = 0; i < E; ++i){
        int a, b, w;
        cin >> a >> b >> w;
        addEdge(adj, a, b, w);
    }
    printGraph(adj, N);
    return 0;
}