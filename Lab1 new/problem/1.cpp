
#include<bits/stdc++.h>
using namespace std;

int **Matrix(int r, int c)
{
    int **m= new int *[r];
    for(int i=0; i<c; i++)
        m[i] = new int[c];


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            m[i][j]= rand()%10;
        }
    }
    return m;
}

void printMatrix(int **m, int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int **matrixsubs(int **x,int r, int c, int **y)
{
    int **m= new int *[r];
    for(int i=0; i<c; i++)
        m[i] = new int[c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            m[i][j]= x[i][j]- y[i][j];
        }
    }
    //printMatrix(m,r,q);
    return m;
}
/*
void **matrixmul(int x,int r, int c, int y, int p, int q)
{
    int **m= new int *[r];
    for(int i=0; i<c; i++)
        m[i] = new int[q];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<q; j++)
        {
            m[i][j]=0;
            for(int k=0; k<c; k++)
            {
                m[i][j]= (x[i][k])*(y[k][j]);
            }
        }
    }
    printMatrix(m,r,q);
}
*/
int main()
{

    srand(time(0));
    int rows;
    int colm;
    cin>>rows>>colm;

    int **A = Matrix(rows,colm);
    printMatrix(A,rows,colm);
    cout<<endl;
    int **B = Matrix(rows,colm);
    printMatrix(B,rows,colm);

    int **C = matrixsubs(A,rows,colm,B);
    //int D = matrixmul(A,rows,colm,B,rows,colm);
    printMatrix(C,rows,colm);

}


