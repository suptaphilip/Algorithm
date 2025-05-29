#include<bits/stdc++.h>
using namespace std;

vector<int> graph[10];

void printGraph(vector<int> g[], int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<i<<"->";
        for(int j=0; j<g[i].size(); j++){
                        cout<<g[i][j]<<" ";
        }
    cout<<endl;
    }


}


int main()
{

    int node,edge,u,v;

    cin>>node>>edge;

    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    printGraph(graph,node);


    return 0;
}

/*
5 4
0 1
1 2
1 3
3 4

*/

