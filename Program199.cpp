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

int main()
{
    int iLength = 0;

    cout<<"Enter the Size of Array : "<<"\n";
    cin>>iLength;

    ArrayX * aobj = new ArrayX(iLength);     // Dynamic

    aobj->Accept();
    aobj->Display();

    return 0;
}