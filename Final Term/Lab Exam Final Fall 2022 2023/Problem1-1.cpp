#include<bits/stdc++.h>
using namespace std;

int main(){

int v;
int edge;

    ifstream in("1.txt");
    in>>v>>edge;
    int u1,v1;

    int **m = new int*[v];

    for(int i=0;i<v;i++){
        m[i]= new int[v];
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            m[i][j]=0;
        }
    }



    for(int i=0;i<edge;i++){
        in>>u1>>v1;
        m[u1][v1]=m[v1][u1]=1;
    }

    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }





}
