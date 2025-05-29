#include<iostream>
#include<stack>
using namespace std;


class student{
private:
    int id;
    string name;
    double cgpa;
public:
    student(){

    }
    student(int id, string name, double cgpa){
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }

    int getId(){
        return id;
    }
    string getName(){
        return name;
    }

    double getCgpa(){
        return cgpa;
    }

};

int main(){

stack<student> studentStack;

//freopen("cgpa.txt","r",stdin);
ifstream fin("cgpa.txt");

int idd;
string nname;
double ccgpa;

for(int i=0;i<3;i++){
    fin>>idd>>nname>>ccgpa;

    student s(idd,nname,ccgpa);
    studentStack.push(s);

}


while(!studentStack.empty()){
        student s = studentStack.top();
    cout<<s.getId()<<" "<<s.getName()<<" "<<s.getCgpa()<<endl;
    studentStack.pop();
}



return 0;
}
