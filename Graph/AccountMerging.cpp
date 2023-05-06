#include <bits/stdc++.h>
using namespace std;
class Disjoint
{
    vector<int> rank, parent, size;

public:
    // Constructer intial Configation
    Disjoint(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
        }
    }
    // Find ultimate Parent using (path Commpression)
    int findUPar(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }
    void unionByRank(int u, int v)
    {
        int ulp_v = findUPar(v);
        int ulp_u = findUPar(u);
        if (ulp_u == ulp_v)
        {
            return;
        }

        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    // Another Method to   implement the Union Data structuer by Size
    void unionBySize(int u, int v)
    {
        int ulp_v = findUPar(v);
        int ulp_u = findUPar(u);
        if (ulp_u == ulp_v)
        {
            return;
        }
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

vector<vector<string>> accountMerging(vector<vector<string>> &details)
{

    int size = details.size();
    Disjoint ds(size);
    unordered_map<string, int> mapping;

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < details[i].size(); j++)
        {
            string mail = details[i][j];
            if (mapping.find(mail) != mapping.end())
            {
                mapping[mail] = i;
            }
            else
            {
                ds.unionBySize(i, mapping[mail]);
            }
        }
    }

    vector<string> mailMerge[size];
    for (auto it : mapping)
    {
        string mail = it.first;
        int node = ds.findUPar(it.second);
        mailMerge[node].push_back(mail);
    }
    vector<vector<string>> ans;
    for (int i = 0; i < size; i++)
    {

        if (mailMerge[i].size() == 0)
        {
            continue;
        }
        sort(mailMerge[i].begin(), mailMerge[i].end());
        vector<string> temp;
        temp.push_back(details[i][0]);
        for (auto it : mailMerge[i])
        {
            temp.push_back(it);
        }
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    // code hear

    return 0;
}