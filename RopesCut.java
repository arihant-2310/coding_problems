import java.util.Scanner;
public class RopesCut {
    public static int max(int a, int b, int c) {
        return Math.max(Math.max(a,b),c);
    }
    public static int numberOfWays(int n, int a, int b, int c) {
        if (n < 0) {
            return -1;
        }
        if (n == 0) {
            return 0;
         }
         int result = max(numberOfWays(n-a, a, b, c)
         ,numberOfWays(n-b, a, b, c)
                 , numberOfWays(n - c, a, b, c));
         if (result == -1)
             return -1;
         return result + 1;
    }
    public static void main(String[] args) {
       
        Scanner sc = new Scanner(System.in);
        int n, a, b, c;
        System.out.println("Enter the value of n,a,b,c:");
        n = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        int ways = numberOfWays(n, a, b, c);
        System.out.println(ways);
        sc.close();
    }
}
