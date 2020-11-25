/* how to return a value from constructor */
#include<iostream>
using namespace std;
class A
{
    int x;
public:
    A()
    {
        throw 100; //check with 100,200// (100,200)
        cout << "constructor A" << endl;
        x=10;
    }
    ~A()
    {
        cout << "Destructor A" << endl;
    }
    void get_data()
    {
        cout << "x=" << x << endl;
    }
};
main()
{
    try
    {
        A obj;
        obj.get_data();
    }
    catch(int a,int b)
    {
        cout << "in catch:" << a << b<< endl;
    }
}
