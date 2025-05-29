
#include<bits/stdc++.h>

using namespace std;


void printList(int *p,int s){


    for(int i=0;i<s;i++){

        cout<<p[i]<<endl;
    }

}





int main(){

srand(time(0));// seeds

int a[1000];

for(int i=0;i<1000;i++){

    a[i]=rand()%6+1;
}

printList(a,1000);

return 0;
}
