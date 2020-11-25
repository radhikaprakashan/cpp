#include<iostream>
using namespace std;
main()
{
    try
    {
        throw 100;
        throw "abc";
    }
    catch(int a)
    {
        cout << "in catch:" << a << endl;
    }
    catch(const char *s)
    {
        cout << "in catch:" << s << endl;
    }
    catch(...)
    {
        cout << "default" <<endl;
    }

}
