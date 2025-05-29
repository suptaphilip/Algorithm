#include<bits/stdc++.h>
using namespace std;

void printList(int *m, int s){
    for(int i=0;i<s;i++){
        cout<<m[i]<<" ";
    }
}

int sumList(int *m, int s){
        int result = 0;
    for(int i=0;i<s;i++){
        result+= m[i];
    }
return result;
}

int *doubleList(int *x, int s){
        int *result = new int[s];
    for(int i=0;i<s;i++){
        result[i]= x[i]*2;
    }
return result;
}

int main(){

int  a[]={10,20,30,40};

printList(a,4);
cout<<"\nSum List= "<<sumList(a,4)<<endl;

cout<<"Double the list: ";
int *p=doubleList(a,4);
printList(p,4);


return 0;
}
