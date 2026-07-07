// // Write a program to display the grade of student Based on marks

class logic 
{
    void displayGrade(int iNo)
    {
        if((iNo > 75) && (iNo < 100))
        {
            System.out.println(" You Got Distinction ");
        }
        else if(iNo >= 65)
        {
            System.out.println(" You Got First Class ");
        }
        else if(iNo >= 55)
        {
            System.out.println(" You Got Second Class ");
        }
        else if(iNo >= 35)
        {
            System.out.println(" You are Pass only ");
        }
        else if(iNo >= 0)
        {
            System.out.println(" You are Fail");
        }
        
    }
}

class program2
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.displayGrade(85);
    }
}
