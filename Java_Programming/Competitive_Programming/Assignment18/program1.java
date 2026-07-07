// Write a program to check whether a number is prime or not

class logic 
{
    void checkPrime(int iNo)
    {
        int iCnt = 0;
        int i = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                i++;
            }
        }

        if(i == 2)
            {
                System.out.println("No is Prime");
            }
            else
            {
                System.out.println("No is Not Prime");
            }

    }
}

class program1
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.checkPrime(8);
    }
}
