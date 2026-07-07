// // Write a program to display the grade of student Based on marks

class logic 
{
    void checkDivisible(int iNo)
    {
        if((iNo % 5 == 0) && (iNo % 11 == 0))
        {
            System.out.println(iNo+" is Divisible by 5 and 11 ");
        }
        else 
        {
            System.out.println(iNo+" is Not Divisible by 5 and 11 ");
        }
        
    }
}

class program3
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.checkDivisible(55);
    }
}
