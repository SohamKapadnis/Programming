// Write a program to print each digit of number seperately
class logic 
{
    void printDigits(int iNo)
    {
       int iDigit = 0;

       while (iNo > 0) 
       { 
           iDigit = iNo % 10;
           System.out.println(iDigit);
           iNo = iNo / 10;
       }
    }
}

class program4
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.printDigits(9876);
    }
}
