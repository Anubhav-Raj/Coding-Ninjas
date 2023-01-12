#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph {
public:
    unordered_map< T, list<T>> adj;
    void addEdge(T u, T v, bool direction)
    {
        // direction =1 ->undirected graph;
        // direction =0 -> directed graph;

        // creating edge
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << " ,";
            }
            cout << endl;
        }
    }

};

int main()
{
    // code hear
    int n, e;
    cout << "Enter the  no. of node " << endl;
    cin >> n;
    cout << "Enter the no. of edge: " << endl;
    cin >> e;

    graph<char> g;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        // graph is creating undirected
        g.addEdge(u,v,0);
    }
    g.print();
    return 0;
}