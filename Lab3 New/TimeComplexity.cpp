#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

void bubbleSort(int *p, int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
        if(p[i]>p[i+1]){
            swap(p[i],p[i+1]);
        }
    }
    }
}

void printList(int *p, int n){
     for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
 }
}



int main(){

    int n=1000;

while(n<=1000000){


 int *A = new int[n];
srand(time(0));
 for(int i=0;i<n;i++){
    A[i] = rand()%10000;
 }

 /*
printList(A,n);
bubbleSort(A,n);
cout<<"..........."<<endl;
printList(A,n);

*/

auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

    // int *m = bubbleSort(A,n);
    bubbleSort(A,n);
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-6;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << " milisec" << endl;
    n+=1000;
    delete A;

}


return 0;
}
