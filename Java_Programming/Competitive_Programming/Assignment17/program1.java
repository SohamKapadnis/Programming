// Write a program to find the sum of digit of a number  

class program1
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.sumOfDigits(1234);
    }
}
class logic 
{
    void sumOfDigits(int iSum)
    {
        int iDigit = 0;
        int isum = 0;

        while (iSum > 0) 
        { 
            iDigit = iSum % 10;
            isum = isum + iDigit;
            iSum = iSum / 10;
        }

        System.out.println("Summation : "+isum);
    }
}