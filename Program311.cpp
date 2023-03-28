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
    
    float fData[] = {10.4f,20.6f,30.95f,41.750f};
    Display(fData,4);

    return 0;
}