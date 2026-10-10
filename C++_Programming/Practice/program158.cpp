#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
        int *Arr;
        int iSize;

        // Parameterised Constructor
        ArrayX(int X)
        {
            cout<<"Inside Constructor"<<endl;

            iSize = X;                  // Characteristics initialisation
            Arr = new int[iSize];      // Resource Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor";
            delete []Arr;              // Resource Deallocation
        }
};

int main()
{
    ArrayX aobj1(5);  

    return 0;
}