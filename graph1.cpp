#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<int>& status)
{
    status[node] = 1;  //currently node is in consideration this iteration

    for(auto it: adj[node])
    {
        if(status[it]==0)
        {
            if(dfs(it, adj , status)) return true;
        }
        else if(status[it]==1)
        {
            return true;
        }
    }
    status[node]=2;
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> adj(n);

    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        adj[i].push_back(v);
    }

    vector<int> status(n,0);
    for(int i=0;i<n;i++)
    {
        if(status[i]==0)   //not visited for connected components
        {
            if(dfs(i, adj, status)) 
            {
                cout<<"True";
                return 0;
            }
        }
    }
    cout<<"False";
    return 0;
}

