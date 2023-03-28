#include<iostream>
using namespace std;

// Call by Reference
template <class T>
void SwapT(T &x, T &y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;
}

// Call By Address
template <class T>
void SwapX(T* x, T* y)
{
    T temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 11;
    int b = 10;
    cout<<"Value of a before swap : "<<a<<"\n";
    cout<<"Value of b before swap : "<<b<<"\n";
    SwapT(a,b);
    cout<<"Value of a after swap : "<<a<<"\n";
    cout<<"Value of b after swap : "<<b<<"\n";

    double x = 11.9;
    double y = 10.1;
    cout<<"Value of x before swap : "<<x<<"\n";
    cout<<"Value of y before swap : "<<y<<"\n";
    SwapX(&x,&y);
    cout<<"Value of x after swap : "<<x<<"\n";
    cout<<"Value of y after swap : "<<y<<"\n";

    return 0;
}