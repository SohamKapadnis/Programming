// Write a program to display all factor of a given number

class logic 
{
    void displayFactor(int iNo)
    {
        int iCnt = 0;
        int iFact = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++ ) 
        { 
           if(iNo % iCnt == 0)
           {
                System.out.println(iCnt+"\t");
           }
        }

    }
}

class program3
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.displayFactor(12);
    }
}
