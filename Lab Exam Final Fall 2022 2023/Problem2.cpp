#include<bits/stdc++.h>
using namespace std;

int main(){

int v=100;
int edge=300;

    srand(time(0));
    ofstream out("2.txt");
    out<<v<<" "<<edge<<endl;
    for(int i=0;i<edge;i++){
        out<<rand()%v<<" "<<rand()%v<<" "<<(-5 + rand() % ( 5 - (-5) + 1 ))<<endl;
    }




}
