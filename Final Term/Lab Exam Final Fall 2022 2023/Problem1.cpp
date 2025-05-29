#include<bits/stdc++.h>
using namespace std;

int main(){

int v=10;
int edge=50;

    srand(time(0));
    ofstream out("1.txt");
    out<<v<<" "<<edge<<endl;
    for(int i=0;i<edge;i++){
        out<<rand()%v<<" "<<rand()%v<<endl;
    }




}
