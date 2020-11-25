#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
public:
    A(){}
    A(int a,int b)
    {
        x=a, y=b;
    }
    void get_data()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
    A operator +(int a)
    {
        cout << "operator + overloaded" << endl;
        A result;
        result.x=x+a;
        result.y=y+a;
        return result;
    }
};
main()
{
    A obj1(10,20),obj3;
    //obj3=obj1.addition(obj2);
    obj3=obj1+100;
    obj3.get_data();
}
