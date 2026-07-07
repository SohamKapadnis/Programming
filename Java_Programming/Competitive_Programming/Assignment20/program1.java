// Write a program to find sum of all even numbers up to N

class logic 
{
    void printEvenNumber(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Even No. Summation : "+iSum);
    }
}

class program1
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.printEvenNumber(10);
    }
}
