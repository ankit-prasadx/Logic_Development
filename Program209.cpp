#include<iostream>
using namespace std;

// Input : 7985674

// Output :     


class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }

        DigitX(int i)
        {
            iNo = i;
        }

        void MaxFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10]= {0};

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }

            int iMaxFrequency = 0;
            int iMaxDigit = 0;
            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt] > iMaxFrequency)
                {
                    iMaxFrequency = Frequency[iCnt];
                    iMaxDigit = iCnt;
                }
            }
            cout<<"Maximum times occured digit is : "<<iMaxDigit<<" and its frequency is "<<iMaxFrequency<<"\n";
        }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Please Enter the number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);
    cout<<obj.iNo<<"\n";

    obj.MaxFrequency();

    return 0;
}