// // Write a program to calculate the power of a number using loops

class logic 
{
    void calculatePower(int base,int exp)
    {
        int iCnt = 0,ipower = 1;
        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            ipower = ipower * base;
        }
 
        System.out.println("Calculation : "+ipower);
    }
}

class program5
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.calculatePower(2,5);
    }
}
