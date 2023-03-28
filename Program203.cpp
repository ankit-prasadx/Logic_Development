#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocating the memory of resources..."<<"\n";
            iSize = i;
            Arr = new int[iSize];   // Arr = (int *)malloc(iSize * sizeof(int));
        }

        ~ArrayX()
        {
            cout<<"Deallocating the memory of resources..."<<"\n";
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the Elements of array : "<<"\n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of array are : "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<'\t';
            }
            cout<<"\n";
        }
};

class MarvellousLB : public ArrayX
{
    public:
        MarvellousLB(int i) : ArrayX(i)
        { }
        int Minimum()
        {
            int iCnt = 0;
            int iMin = Arr[0];

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the Size of Array : "<<"\n";
    cin>>iLength;
    
    MarvellousLB * mobj = new MarvellousLB(iLength);

    mobj->Accept();
    mobj->Display();
    
    iRet = mobj->Minimum();

    cout<<"Smallest element is : "<<iRet<<"\n";

    delete mobj;

    return 0;
}