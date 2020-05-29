#include<iostream>
#include<string>

using namespace std;

class student{
    private:
    string name;
    string  id;
    string gender;
    float cgpa;

public:
    student(){
    cgpa=0.00;
    cout<<"Default constructor"<<endl;
    }
    void setName(string name){
     this-> name= name;
    }
    void setId(string id){
    this-> id=id;
    }
    void setGender(string gender){
    this-> gender=gender;
    }
    string getName(){
        return name;
    }
    string getId(){
      return id;
    }
    string getGender(){
      return gender;
    }
    void print(){
    cout<<"name :"<<name<<endl;
    cout<<"id :"<<id<<endl;
    cout<<"gender :"<<endl;
    }
};
int main(){
student s1,s2;
s1.setName(riaz);
}


