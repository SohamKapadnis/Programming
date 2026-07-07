// Write a program to print all Odd numbers up to N

class logic 
{
    void printOddNumber(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                System.out.print(iCnt+"\t");
            }
        }

    }
}

class program3
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.printOddNumber(20);
    }
}
