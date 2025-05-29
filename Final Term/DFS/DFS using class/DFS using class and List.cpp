

#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
private:
vector<T> *g;
int *visited;
int V;
int E;
public:
    Graph(int V, int E){
        this->V=V;
        this->E=E;
            g = new vector<T>[V];
            visited = new int[V];

          for(int i=0; i<V; i++){
            visited[i]=0;
          }
    }


void dfs(T source){

    stack<T> st;
    st.push(source);
visited[source]=1;

while(!st.empty()){

    T v=st.top();
    st.pop();
    cout<<v<<" ";
    for(int i=0;i<g[v].size();i++){
        T next = g[v][i];
        if(visited[next]==0){
            st.push(next);
            visited[next]=1;
        }
}

}


}

 void addEdge(T u, T v)
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




};



int main(){

int node, edge;

    cin>>node>>edge;
    Graph<int> G(node,edge);

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

    G.dfs(source);


return 0;
}


