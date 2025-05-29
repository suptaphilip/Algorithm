#include <bits/stdc++.h>
using namespace std;



class Graph
{
private:
int V;
int E;
vector<int> *g;
int *visited;
int *dis;


public:

    Graph(int V, int E){
        this->V=V;
        this->E=E;
            g = new vector<int>[V];
            visited = new int[V];
            dis = new int[V];

          for(int i=0; i<V; i++){
            visited[i]=0;
            dis[i]=0;
          }
    }

    void bfs(int v)
    {

        queue<int> q;
        q.push(v);
        visited[v]=1;
        dis[v]=0;

        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            cout<<p<<" ";
            for(int i=0; i<g[p].size(); i++)
            {
                int next = g[p][i];
                if(visited[next]==0)
                {
                    q.push(next);
                    visited[next]=1;
                    dis[next]=dis[p]+1;
                }
            }

        }


    }

    void addEdge(int u, int v)
    {

        g[u].push_back(v);
        g[v].push_back(u);

    }

    void printGraph()
    {

        for(int i=0; i<V; i++)
        {
            cout<<i<<"-->";
            for(int j=0; j<g[i].size(); j++)
            {
                cout<<g[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void printDistance(int source)
    {

        cout<<"\nDistance"<<endl;

        for(int i=0; i<V; i++)
        {
            cout<<source<<" "<<i<<" "<<dis[i]<<endl;
        }

    }

};



int main()
{
    int node, edge;

    cin>>node>>edge;
    Graph G(node,edge);

    int u,v;

    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;
        G.addEdge(u,v);
    }
    G.printGraph();

    int source;
    cout<<"Enter source for BFS: ";
    cin>>source;

    G.bfs(source);
    G.printDistance(source);


    return 0;
}


/*
7 11
0 1
0 3
1 3
2 3
4 3
1 2
4 2
4 6
1 6
2 5
1 5


*/


