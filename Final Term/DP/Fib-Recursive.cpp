#include<bits/stdc++.h>
using namespace std;

long long int f[100];

long long int fibo(long long int n){
    if(n<=1) return n;
    if(f[n]!=-1) return f[n];
    f[n] = fibo(n-1)+fibo(n-2);
    return f[n];
}

int main(){


     //cout<<fibo(45)<<endl;

    for(int i=0;i<=50;i++){

    for(int i=0;i<100;i++){
            f[i]=-1;
    }

        cout<<i<<" "<<fibo(i)<<endl;
    }

}
