#include <iostream>
#include <string>

using namespace std;

class student{

private:
    string name;
    string id;
    float cgpa=0.0;
    string gender;


public:
    void setName(string name){
        this->name = name;}
    void setId(string id){
        this->id = id;}
    void setCgpa(float cgpa){
        this->cgpa = cgpa;}
    void setGender(string gender){
        this->gender = gender;}

    string getName(){
        return name;}
    string getid(){
        return id;
    }
    float getCgpa(){
        return cgpa;
    }
    string getGender(){
        return gender;
    }

        void print(){

        cout<<"Name:"<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"Gender: "<<gender<<endl;

        }

};


int main()
{
    student stu1, stu2;

    stu1.setName("Hameem");
    stu1.setId("17-33856-1");
    stu1.setCgpa(3.9);
    stu1.setGender("Male");

    stu1.print();

    cout<<stu1.getid()<<endl;
}
