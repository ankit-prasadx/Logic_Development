#include<iostream>
using namespace std;

// Problems on numbers

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        void Function()
        {
            // Logic here
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Numbers nobj(iValue);

    nobj.Function();

    return 0;
}