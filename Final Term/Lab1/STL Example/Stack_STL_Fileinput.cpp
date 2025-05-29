#include<iostream>
#include<stack>
using namespace std;


int main(){

stack<string> nameStack;

//freopen("name.txt","r",stdin);

ifstream fin("name.txt");


string name;


for(int i=0;i<3;i++){
    fin>>name;
    nameStack.push(name);

}


while(!nameStack.empty()){
        cout<<nameStack.top()<<endl;
        nameStack.pop();
}



return 0;
}
