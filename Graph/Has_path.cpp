#include <bits/stdc++.h>
using namespace std;
bool has_path(int **edge, int n, int sv, int ev){
    
}

int main()
{
    // code hear
    int n, e;
    cin >> n >> e;
    // Dynamically allocating  row  space in heap
    int **edge = new int *[n];
    // Dynamically allocating column space in heap

    for (int i = 0; i < n; i++)
    {
        edge[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edge[i][j] = 0;
        }
    }
    // Taking Input
    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edge[f][s] = 1;
        edge[s][f] = 1;
    }
    int sv, ev;
    cin >> sv >> ev;
    BFS(edge, n, sv, ev);
    return 0;
}