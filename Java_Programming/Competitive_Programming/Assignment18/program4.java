// Write a program to print sum of all even and odd  digits seperately in a number

class logic 
{
    void SumEvenOddNumber(int iNo)
    {
        
       int iDigit = 0,iSumOdd = 0,iSumEven = 0;
       while (iNo > 0) 
       { 
           iDigit = iNo % 10;
           if(iDigit % 2 == 0)
           {
                iSumEven = iSumEven + iDigit;
           }
           else
           {
                iSumOdd = iSumOdd + iDigit;
           }
           iNo = iNo / 10;
       }

       System.out.println("Summation of Even : "+iSumEven);
       System.out.println("Summation of Odd : "+iSumOdd);


    }
}

class program4
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.SumEvenOddNumber(123456);
    }
}
