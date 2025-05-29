#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int BFS()
{
// write your function/algorithm here
}

int DFS(){

// write your function/algorithm here

}

int main()
{

    // Take input

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    cout<<DFS()<<endl;
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 1st Algorithm........................*/


    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    cout<<BFS()<<endl;
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 1st Algorithm........................*/



    return 0;
}
