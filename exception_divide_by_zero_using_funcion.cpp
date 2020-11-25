#include<iostream>
using namespace std;
int division(int n1,int n2)
{
    if(n2==0)
        throw "divide by zero";
    return n1/n2;
}
main()
{
    int n1,n2,ret;
    cout << "Enter the number" << endl;
    cin >> n1;
    cout << "Enter the number" << endl;
    cin >> n2;
    try
    {
        ret=division(n1,n2);
        cout << "result=" << ret << endl;

    }
    catch(const char *s)
    {
        cout <<"in catch: " << endl;
        cout << "exception " << s << endl;
    }
}
