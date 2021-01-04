import java.util.Scanner;
public class StringPalindromeTailRecursion {
    public static boolean isPalindrome(String str, int s, int e) {
        if (s == e || s==e+1) {
            return true;
        }
        if (str.charAt(s) != str.charAt(e)) {
            return false;
        }
        return isPalindrome(str, s + 1, e - 1);
    }
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string");
        String str = sc.nextLine();
        System.out.println(isPalindrome(str, 0, str.length()-1));
        sc.close();
    }
}
