/*
input:

100 Richard 3.8
200 Aaron 3.9


*/

#include<bits/stdc++.h>
using namespace std;


class student
{

private:
    int id;
    string name;
    double cgpa;
public:
    student()
    {

    }
    student(int i, string n, double cg)
    {
        this->id=i;
        this->name = n;
        this->cgpa = cg;
    }

    int getId(){
        return this->id;
    }

   string getName(){
        return this->name;
    }

    double getCgpa(){

        return this->cgpa;
    }



};

 void printStudent(vector<student> m){
        for(int i=0;i<m.size();i++){
            cout<<m[i].getId()<<" "<<m[i].getName()<<" "<<m[i].getCgpa()<<endl;
        }

    }

int main()
{
    int id;
    string name;
    double cgpa;


    vector<student> S;

    for(int i=0;i<2;i++){
        cin>>id>>name>>cgpa;
        student s1(id,name,cgpa);
        S.push_back(s1);


    }

    printStudent(S);





    return 0;
}

