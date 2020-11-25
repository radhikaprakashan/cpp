#include<iostream>
using namespace std;
main()
{
    int n1,n2,result;
    cout << "Enter the number" << endl;
    cin >> n1;
    cout << "Enter the number" << endl;
    cin >> n2;
    try
    {
        if(n2==0)
            throw "divide by zero";
            result=n1/n2;
            cout << "result=" << result << endl;
    }
    catch(const char *s)
    {
        cout <<"in catch: " << endl;
        cout << "exception " << s << endl;
    }
}
