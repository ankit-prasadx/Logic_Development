#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Max < Arr[iCnt])
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int iData[] = {10,20,30,40,21};
    int iRet = 0;
    iRet = Maximum(iData,5);
    cout<<"Maximum is : "<<iRet<<"\n";
    
    
    float fData[] = {10.4f,20.6f,30.95f,41.750f};
    float fRet = 0.0f;
    fRet = Maximum(fData,4);
    cout<<"Maximum is : "<<fRet<<"\n";


    return 0;
}