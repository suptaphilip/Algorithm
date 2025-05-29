#include<bits/stdc++.h>
using namespace std;

int main(){

int v;
int edge;

    ifstream in("1.txt");
    in>>v>>edge;
    int u1,v1;

    vector<int> *g;

    g = new vector<int>[v];




    for(int i=0;i<edge;i++){
        in>>u1>>v1;
        g[u1].push_back(v1);
        g[v1].push_back(u1);
    }

    for(int i=0;i<v;i++){
            cout<<i<<"->";
        for(int j=0;j<g[i].size();j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }





}

