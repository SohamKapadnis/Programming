// Write a program to find the largest digit in a given number

class logic 
{
    void findLargestDigit(int iNo)
    {
        int iDigit = 0;
        int iMax = 0;

        while (iNo > 0) 
        { 
           iDigit = iNo % 10;

           if(iDigit > iMax)
           {
                iMax = iDigit;
           }
           
           iNo = iNo / 10;
        }

        System.out.println("Largest Digit : "+iMax);

    }
}

class program4
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.findLargestDigit(83429);
    }
}
