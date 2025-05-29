// f(m,n) = m if n==m
        // f(m-n,n) if m>n
        // f(m,n-m)  if n>m


#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;



long long int gcd(long long int m, long long int n){

    if(m==n){
        return m;
    }

    else if(m>n){
        return gcd(m-n,n);

    }else{
        return gcd(m,n-m);
    }
}

int main(){

        auto st = high_resolution_clock::now();
        cout<<gcd(123456789876545,7)<<endl;
        auto en = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(en - st);
        cout<< duration.count() << " " << (duration.count()/1000.0) << "\n";


return 0;
}

