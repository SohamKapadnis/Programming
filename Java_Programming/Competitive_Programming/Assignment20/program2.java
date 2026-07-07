// Write a program to print number from N down to 1 in reverse order
class logic 
{
    void printReverse(int iNo)
    {
        int iCnt = 0;
        for(iCnt = iNo; iCnt >=1; iCnt--)
        {
            System.out.println(""+iCnt);
        }

    }
}

class program2
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.printReverse(10);
    }
}
