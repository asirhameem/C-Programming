#include<stdio.h>

using namespace std;

class stack{

int *stack,top,maxsize;

public:
    stack(int size){

    stack = new int[maxsize];
    size = maxsize;
    top = 0;

    }

    ~stack()
    {

        delete [] stack;

    }

    bool isEmpty()
{
    return top==0;
}

bool isFull()
{
    return top==maxsize;

}

bool push(int element)

{

    if(isFull())

    {
        cout<<"stack is full"<<endl;
        return false;

    }

    stack[top++] = element;
    return true;
}

bool pop()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return false;
    }
    top--;
    return true;
}
int topelement()
{

    return stack[top-1];

}
int resize(int size)
{

     int  *tempstack = new int[maxsize + size];

     for(i=0;i<maxsize;I++){
     tempstack[i] = stack[i];
     }
     maxsize=maxsize+size;
     delete stack;
     tempstack = stack;

}

int show()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return false;
    }

    for(i=0;i<maxsize;i++)
    {
        cot<<stack[i]<<endl;

    }

}


};
