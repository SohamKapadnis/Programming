// Write a program to calculate the product of digits of a number 

class logic 
{
    void productOfDigits(int iNo)
    {
        int iDigit = 0;
        int iPro = 1;

        while (iNo > 0) 
        { 
           iDigit = iNo % 10;          
           iPro = iPro * iDigit;
           iNo = iNo / 10;
        }

        System.out.println("Product of Digit : "+iPro);

    }
}

class program1
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.productOfDigits(234);
    }
}
