// f(n) = 1 if n=0
        // n*f(n-1)

#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;


long long int fact(long long int n){

    if(n==0){

        return 1;
    }

    else{

        return n*fact(n-1);

    }

}

int main(){
        auto st = high_resolution_clock::now();
        cout<<fact(12)<<endl;
        auto en = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(en - st);
        cout<< duration.count()<<endl;


return 0;
}

