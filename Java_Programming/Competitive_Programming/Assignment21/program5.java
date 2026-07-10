// Write a program to print all number from 1 to N that are divisble by both 2 and 3

class logic 
{
    void printDivisibleBy2and3(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++ ) 
        { 
           if((iCnt % 2 == 0) && (iCnt % 3 == 0))
           {
               System.out.println(iCnt);
           }
        }    
    }
}

class program5
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.printDivisibleBy2and3(20);
    }
}
