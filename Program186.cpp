#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    cout<<"Enter First Number : \n";        // printf("Enter First Number : \n");
    cin>>iNo1;                              // scanf("%d",&iNo1);

    cout<<"Enter Second Number : \n";       // printf("Enter First Number : \n");
    cin>>iNo2;                              // scanf("%d",&iNo1);

    iAns = iNo1 + iNo2;

    cout<<"Addition is : "<<iAns<<"\n";     // printf("Addition is : %d\n",iAns);

    return 0;
}