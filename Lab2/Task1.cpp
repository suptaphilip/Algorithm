#include<bits/stdc++.h>
using namespace std;



int LinearSearch(int m[], int key, int s)
{
    int flag=1;
    for(int i=0; i<s; i++)
    {
        if(m[i]==key)
        {
            cout<<"Found in "<<i<<" position and data "<<m[i];
        }else{
            flag =-1;
        }
    }
    return flag;
}

int main()
{
    int n=1000;

    int *a = new int[n];

    //freopen("out.txt","r",stdin);
    ifstream in("out.txt");

    for(int i=0;i<n;i++){
        in>>a[i];
    }

    int element;
    cout<<"what you want to search"<<endl;
    cin>>element;

    int index=LinearSearch(a,element,10);
    if(index==-1)

    {
        cout<<"Not found"<<endl;
    }




    return 0;
}
