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
    friend A operator +(A t1, A t2);
};
    A operator +(A t1, A t2)
    {
        cout << "operator + overloaded" << endl;
        A result;
        result.x=t1.x+t2.x;
        result.y=t1.y+t2.y;
        return result;
    }

main()
{
    A obj1(10,20),obj2(100,200),obj3;
    //obj3=obj1.addition(obj2);
    obj3=obj1+obj2;
    obj3.get_data();
}

