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
    A operator +(A &temp)
    {
        cout << "operator + overloaded" << endl;
        A result;
        result.x=x+temp.x;
        result.y=y+temp.y;
        return result;
    }
};
main()
{
    A obj1(10,20),obj2(100,200),obj3;
    //obj3=obj1.addition(obj2);
    obj3=obj1+obj2;
    obj3.get_data();
}
