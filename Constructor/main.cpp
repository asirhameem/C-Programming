#include <iostream>
#include<string>


using namespace std;


class student{

private:
    string name;
    string id;
    float cgpa;
    string gender;

public:
    student(){
    cgpa = 0.0;
    }

    student(string name, string id, float cgpa, string gender){

    this-> name = name;
    this->id = id;
    this->cgpa = cgpa;
    this->gender = gender;

    }

    void print(){

    cout<<"Name: "<<name<<endl;
    cout<<"id: "<<id<<endl;
    cout<<"cgpa: "<<cgpa<<endl;
    cout<<"gender: "<<gender<<endl;

    }


};




int main()
{


student stu1("hameem","17-33856-1",3.0,"male");

stu1.print();

student stu2("inan", "20-33856-1",4.0,"male");

stu2.print();

}
