#include<bits/stdc++.h>
using namespace std;

void Merge(int *arr, int left, int mid, int right)
{

    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    /* create temp arrays */
    int *L = new int[n1];
    int *R = new int[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1+ j];

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];

        }
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];

    }
}


void printList(int *m, int s)
{

    for(int i=0; i<s; i++)
    {
        cout<<m[i]<<" ";
    }
}

void mergeSort(int A[], int left, int right)
{
    if (left < right)
    {
        int mid = (left+right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid+1, right);
        Merge(A, left, mid, right);
    }
}

int BinarySearchR(int *A, int low, int high, int x){

    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(x==A[mid]) return mid;
    if(x>A[mid]) return BinarySearchR(A,mid+1,high,x);
    else  return BinarySearchR(A,low,mid-1,x);
}

int main()
{

    int A[6]= {100,2,30,400,50,61};

    mergeSort(A,0,5);


    printList(A,6);

    int index = BinarySearchR(A,0,5,45);
    cout<<endl;
    if(index == -1) cout<<"Not found";
    else cout<<"found "<<A[index]<<" in "<<index<<" location"<<endl;


    return 0;
}
