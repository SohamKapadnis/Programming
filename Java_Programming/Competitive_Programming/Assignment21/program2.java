// Write a program to count how many even and numbers are present between 1 and N

class logic 
{
    void countEvenOddRange(int iNo)
    {
        int iDigit = 0;
        int iEvenCnt = 0;
        int iOddCnt = 0;

        while (iNo > 0) 
        { 
           iDigit = iNo % 10;          
           if((iDigit % 2) == 0)
           {
                iEvenCnt++;
           }
           else
           {
                iOddCnt++;
           }
           iNo = iNo / 10;
        }

        System.out.println("Even Count : "+iEvenCnt);
        System.out.println("Odd Count : "+iOddCnt);

    }
}

class program2
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.countEvenOddRange(50);
    }
}
