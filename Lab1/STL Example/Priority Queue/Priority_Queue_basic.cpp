#include<iostream>
#include<priority_queue>
#include<vector>
using namespace std;

class CustomCompare
{
public:

    bool operator()(const int& lhs, const int& rhs)
    {
        return lhs < rhs;
    }
};

int main(){

    priority_queue<int,vector<int>, CustomCompare > pq;

    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(8);


return 0;
}
