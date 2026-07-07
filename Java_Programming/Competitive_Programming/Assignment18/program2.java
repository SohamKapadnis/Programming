// Write a program to print all even numbers up to N

class logic 
{
    void printEvenNumber(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                System.out.print(iCnt+"\t");
            }
        }

    }
}

class program2
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.printEvenNumber(20);
    }
}
