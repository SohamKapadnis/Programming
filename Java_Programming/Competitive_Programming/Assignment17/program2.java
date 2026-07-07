// Write a program to check whether a number is a palindrome or not  

class program2
{
    public static void main(String A[] ) 
    {
        logic obj = new logic();
        obj.CheckPalindrome(121);
    }
}
class logic 
{
    void CheckPalindrome(int num)
    {
        int iDigit = 0;
        int rev = 0;
        int no = num;

        while (num > 0) 
        { 
            iDigit = num % 10;
            rev = (rev * 10) + iDigit;
            num = num / 10;
        }
     
        if(no == rev)
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is not Palindrome");
        }

    }
}