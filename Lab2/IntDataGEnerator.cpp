#include<bits/stdc++.h>
using namespace std;


int main(){

    srand(time(0));

    freopen("out.txt","w",stdout);
    for(int i=0;i<1000;i++){
       cout<<(rand()%100000+1)<<endl; // 1 - 100000
    }
    //printList(a,n);

return 0;
}

