#include<iostream>
using namespace std;

class singleton
{
    static singleton* single;
    static bool instance_flag;
    singleton()
    {
        cout << "constructor" << endl;
    }
    ~ singleton()
    {
        delete single;
        instance_flag=false;
    }
public:
    static singleton *get_instance()
    {
        if(instance_flag==false)
        {
            single=new singleton;
            instance_flag=true;
            return single;
        }
        else
            return single;
    }
};
bool singleton::instance_flag=false;
singleton* singleton::single=0;

main()
{
    singleton *p1,*p2;
    p1=singleton::get_instance();
    cout << (unsigned)p1 << endl;

    p2=singleton::get_instance();
    cout << (unsigned)p2 << endl;
}
