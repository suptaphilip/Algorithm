#include<bits/stdc++.h>
using namespace std;


int * Vector(int s){

int *a = new int[s];

return a;
}


int **matrix(int row, int column){

  int** m;

    //Dynamically allocating row space in heap
    m = new int*[row];
    //Dynamically allocating column space in heap
    for(int i=0; i<row; i++){
        m[i] = new int[column];
    }


return m;
}

void printfMatrix(int **m, int row, int column){

 for(int i=0; i<row; i++){
         for(int j=0; j<column; j++){
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
 }

}


int main(){

    int row;
    int column;
    srand(time(0));
    cin>>row>>column;

    int **A = matrix(row,column);

    int **B = matrix(row,column);

 for(int i=0; i<row; i++){
         for(int j=0; j<column; j++){
        A[i][j] = rand()%100;
    }
 }

printfMatrix(A,row,column);


return 0;
}
