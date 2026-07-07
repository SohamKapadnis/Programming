// // Write a program to whether give year is leap year or not

class logic 
{
    void checkLeapYear(int iNo)
    {
          if(iNo % 4 == 0)
            {
                System.out.println(iNo+" Year is Leap Year ");
            }
            else
            {
                System.out.println(iNo+" Year is Not Leap Year ");
            }
    }
}

class program1
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.checkLeapYear(2024);
    }
}
