// Write a program to Find the maximum of two number 

class logic 
{
    void FindMax(int iNo1,int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println("Maximun : "+iNo1);
        }
        else
        {
            System.out.println("Maximun : "+iNo2);
        }
        

    }
}

class program3
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.FindMax(20,15);
    }
}
