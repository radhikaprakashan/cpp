#include<iostream>
using namespace std;

class array
{
    int a[5];
public:
    void operator()(int ax=0,int b=0, int c=0,int d=0, int e=0)
    {
        a[0]=ax, a[1]=b, a[2]=c, a[3]=d, a[4]=e;
    }
    array operator-()
    {
        array result;
        for(int i=0;i<5;i++)
        result.a[i]=-a[i];
        return result;
    }
    array operator ++(int)
    {
        array result;
        for(int i=0;i<5;i++)
        result.a[i]=a[i]++;
        return result;
    }
    array operator ++()
    {
        array result;
        for(int i=0;i<5;i++)
        result.a[i]=++a[i];
        return result;
    }
    int & operator [](int index)
    {
        return a[index];
    }
};
main()
{
    array a1,a2;
    cout <<"enter the elements" << endl;
    for(int i=0;i<5;i++)
        cin >> a1[i];
    a2=++a1;
    for(int i=0;i<5;i++)
        cout << a1[i] << endl;
    for(int i=0;i<5;i++)
        cout << a2[i] << endl;

}
