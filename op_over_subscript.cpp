#include<iostream>
using namespace std;

class array
{
    int a[5];
public:
    int & operator [](int index)
    {
        return a[index];
    }
};
main()
{
    array a1;
    cout << "Enter array elements" << endl;
    for(int i=0;i<5;i++)
    cin >> a1[i];
    for(int i=0;i<5;i++)
        cout << a1[i] << endl;
}
