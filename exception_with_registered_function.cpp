#include<iostream>
#include<stdlib.h>
using namespace std;
void test()
{
    cout << "cpp is simple" << endl;
    cout << "good morning" << endl;
    cout << "hello world" << endl;
    exit(0);
}
main()
{
    //set_terminate(test);
    try
    {
        set_terminate(test);
        throw 100;
    }
    catch(int a)
    {
        cout << "in catch :" << a << endl;
    }
}
