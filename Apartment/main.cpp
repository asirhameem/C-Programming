#include <iostream>
#include<string>

using namespace std;

class sharminbay{

private:
    string apartment;
    int floor;

public:
    void setApartment(string apartment){
        this->apartment = apartment;
    }
    void setFloor(int floor){
        this-> floor= floor;
    }
    string getApartment(){
        return apartment;
    }


    void print(){
    cout<<"apartment: "<<apartment<<endl;
    cout<<"floor:"<<floor<<endl;
    }
};

int main()
{
sharminbay apart1,apart2;

apart1.setApartment("babu");
apart1.setFloor(2);
//apart1.print();

cout<<apart1.getApartment()<<endl;
}
