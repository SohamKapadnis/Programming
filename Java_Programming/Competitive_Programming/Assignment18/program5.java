// Write a program to number is positive,negative or zero

class logic 
{
    void CheckSign(int iNo)
    {
        if(iNo == 0)
        {
            System.out.println("No is Zero");
        }
        else
        {   if(iNo > 0)
            {
                System.out.println("Number is Positive");
            }
            else
            {
                System.out.println("Number is Negative");
            }
        }
        

    }
}

class program5
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.CheckSign(0);
    }
}
