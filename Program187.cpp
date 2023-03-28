#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2)
{
    int iAns = 0;

    iAns = iValue1 + iValue2;

    return iAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    cout<<"Enter First Number : \n";        // printf("Enter First Number : \n");
    cin>>iNo1;                              // scanf("%d",&iNo1);

    cout<<"Enter Second Number : \n";       // printf("Enter First Number : \n");
    cin>>iNo2;                              // scanf("%d",&iNo1);

    iRet = Addition(iNo1,iNo2);

    cout<<"Addition is : "<<iRet<<"\n";     // printf("Addition is : %d\n",iRet);

    return 0;
}