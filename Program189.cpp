#include<iostream>
using namespace std;

class Arithmetic
{
    public:                     // Access Specifier
        int iValue1;            // Characteristics
        int iValue2;            // Characteristics

        Arithmetic()            // Default constructor
        {
            iValue1 = 0;
            iValue2 = 0;
        }

        Arithmetic(int A, int B)            // Parameterized constructor
        {
            iValue1 = A;
            iValue2 = B;
        }
        
        int Addition()
        {
            int iAns = 0;
            iAns = iValue1 + iValue2;
            return iAns;
        }
};

int main()
{
    int iRet = 0;

    Arithmetic aobj1;
    Arithmetic aobj2(10,11);
    Arithmetic aobj3(20,21);

    iRet = aobj1.Addition();
    cout<<"Addition is : "<<iRet<<"\n";     // 0

    iRet = aobj2.Addition();
    cout<<"Addition is : "<<iRet<<"\n";     // 21

    iRet = aobj3.Addition();
    cout<<"Addition is : "<<iRet<<"\n";     // 41

    return 0;
}