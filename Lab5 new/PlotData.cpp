#include<bits/stdc++.h>
using namespace std;


float f(float x){

    return pow(2,x);

}

int main(){

    float a[]={-2,-1,0,1,2};

    for(int i=0;i<5;i++){
        cout<<a[i]<<" "<<f(a[i])<<endl;
    }

return 0;
}
