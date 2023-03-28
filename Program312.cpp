#include<iostream>
using namespace std;

template <class T>
T Summation(T Arr[], int iSize)
{
    int iCnt = 0;
    T Sum;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int iData[] = {10,20,30,40};
    int iRet = 0;
    iRet = Summation(iData,4);
    cout<<"Addition is : "<<iRet<<"\n";
    
    
    float fData[] = {10.4f,20.6f,30.95f,41.750f};
    float fRet = 0.0f;
    fRet = Summation(fData,4);
    cout<<"Addition is : "<<fRet<<"\n";

    return 0;
}