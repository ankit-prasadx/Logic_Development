#include<iostream>
using namespace std;

// Problems on N-numbers(array)

class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int(iSize);
        }

        void Accept()
        {
            cout<<"Please Enter the Numbers : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of Array are : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int SumEven()
        {
            int iSum = 0;
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }

};

int main()
{
    int iLength = 0;
    int iRet = 0;
    cout<<"Enter the number of Elements : \n";
    cin>>iLength;

    ArrayX aobj(iLength);
    
    aobj.Accept();
    aobj.Display();

    iRet = aobj.SumEven();
    cout<<"Sum of Even Elements is : "<<iRet<<"\n";

    return 0;
}