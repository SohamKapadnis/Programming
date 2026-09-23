import java.util.*;

class DigitX
{
    public int SumEvenDigits(int iNo)   // Without digit variable
    {
        int iSum = 0;

        while(iNo > 0)
        {
           iSum = iSum + (iNo % 10);
           iNo = iNo / 10;
        }

        return iSum;
    }
}

class program91
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.SumEvenDigits(iValue);

        System.out.println("Summation of Digit is : "+iRet);

    }
}