import java.util.*;

class DigitX
{
    public void CountOddDigits(int iNo)
    {
        int iDigit = 0;
        int iEvenCount = 0;
        int iOddCount = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iOddCount++;
            }
            else 
            {
                iEvenCount++;
            }
            iNo = iNo / 10;           
        }

        System.out.println("Count of Even Digits : "+iEvenCount);
        System.out.println("Count of Even Digits : "+iOddCount);
    }
}

class program88
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        
        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        dobj.CountOddDigits(iValue);

    }
}