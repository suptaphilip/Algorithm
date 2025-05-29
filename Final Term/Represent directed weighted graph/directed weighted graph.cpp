#include<bits/stdc++.h>
using namespace std;

#define N 100

struct node{
    int val;
    int cost;
};

vector<node> G[N];

int main(){

int nodes;
int edges;
cin>>nodes>>edges;

for(int i=0;i<edges;i++){
    int u,v,w;
    cin>>u>>v>>w;
    G[u].push_back({v,w});
}


for(int i=0;i<nodes;i++){
cout<<i<<" ";
    for(int j=0;j<G[i].size();j++){
        cout<<"{"<<G[i][j].val<<","<<G[i][j].cost<<"}"<<" ";
    }

cout<<endl;
}


return 0;
}


/*
5 6
0 1 2
0 2 1
0 3 3
1 2 1
3 4 2
4 2 5


*/
