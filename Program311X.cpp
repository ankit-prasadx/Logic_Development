#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int iData[] = {10,20,30,40};
    Display(iData,4);
    
    char cData[] = {'a','b','c','d','e'};
    Display(cData,5);

    return 0;
}