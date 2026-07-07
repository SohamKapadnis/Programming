// Write a program to print the multiplication table of number

class logic 
{
    void findmin(int iNo1)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(""+iNo1 * iCnt);
        }
    }
}

class program5
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.findmin(5);
    }
}
