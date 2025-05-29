#include<bits/stdc++.h>
using namespace std;

int *mergE(int *A, int *B, int n, int m){

    int i=0,j=0,k=0;
    int *C= new int[n+m];
    while(i<=n-1 && j<=m-1){
            if(A[i]<B[j]){
                C[k++]=A[i++];
            }else{
                C[k++]=B[j++];
            }
    }
    while(i<=n-1){
        C[k++]=A[i++];
    }
     while(j<=m-1){
        C[k++]=B[j++];
    }

    return C;
}

void printList(int *m, int s){

    for(int i=0;i<s;i++){
        cout<<m[i]<<" ";
    }
}

MergeSort(){


}


int main(){

    int A[6]={10,20,30,40,50,60};
    int B[3]={5,15,25};
    int *p = mergE(A,B,6,3);
    printList(p,9);


return 0;
}
