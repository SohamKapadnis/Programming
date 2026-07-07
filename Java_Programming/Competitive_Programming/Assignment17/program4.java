// Write a program to Find the minimum of three number 

class logic 
{
    void findmin(int iNo1,int iNo2,int iNo3)
    {
        if((iNo1 < iNo2) && (iNo1 < iNo3))
        {
            System.out.println("Minimum : "+iNo1);
        }
        else if (iNo2 < iNo3) 
        {
            System.out.println("Minimum : "+iNo2);
        }
        else
        {
            System.out.println("Minimum : "+iNo3);
        }
        

    }
}

class program4
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.findmin(3, 7, 2);
    }
}
