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
        }

};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of Elements : \n";
    cin>>iLength;

    ArrayX aobj(iLength);
    
    aobj.Accept();
    aobj.Display();

    return 0;
}