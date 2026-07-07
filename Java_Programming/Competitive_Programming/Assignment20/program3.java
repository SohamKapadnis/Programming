// Write a program to check whether a number is a perfect number or not
class logic 
{
    void checkPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo )
        {
            System.out.println("No is Perfect");
        }
        else
        {
            System.out.println("No is not Perfect number");
        }

    }
}

class program3
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.checkPerfect(28);
    }
}
