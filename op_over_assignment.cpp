#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
public:
    A(){
    x=0, y=0;
    }
    A(int a,int b)
    {
        x=a, y=b;
    }
    void get_data()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
    A operator =(A temp)
    {
        cout << "operator = overloaded" << endl;
        x=temp.x;
        y=temp.y;
        return *this;5
    }
};
main()
{
    A obj1(10,20),obj2,obj3;
    obj3=obj2=obj1;
    obj2.get_data();
    obj3.get_data();
}

