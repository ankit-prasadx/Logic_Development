#include<iostream>
using namespace std;

// Call by Reference
void Swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 11;
    int b = 10;

    cout<<"Value of a before swap : "<<a<<"\n";
    cout<<"Value of b before swap : "<<b<<"\n";

    Swap(a,b);

    cout<<"Value of a after swap : "<<a<<"\n";
    cout<<"Value of b after swap : "<<b<<"\n";

    return 0;
}