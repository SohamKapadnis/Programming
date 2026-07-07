// Write a program to find the Smallest digit in a given number

class logic 
{
    void findLargestDigit(int iNo)
    {
        int iDigit = 0;
        int iMin = 9;

        while (iNo > 0) 
        { 
           iDigit = iNo % 10;

           if(iDigit < iMin)
           {
                iMin = iDigit;
           }
           
           iNo = iNo / 10;
        }

        System.out.println("Smallest Digit : "+iMin);

    }
}

class program5
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.findLargestDigit(45872);
    }
}
