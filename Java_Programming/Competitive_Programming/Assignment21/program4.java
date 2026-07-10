// Write a program to count total number of factor of a given number 

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
                iFact++;
           }
        }

        System.out.println("Count of Factors : "+iFact);
    }
}

class program4
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.displayFactor(20);
    }
}
