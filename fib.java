import java.util.Scanner;
class fib{
    public static void main(String [] args){
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");
        n = sc.nextInt();
        long first = 0;
        long second = 1;
        long third=0;
        if(n==1)
        {
            System.out.println(first);
        }
        else if(n==2)
        {
            System.out.printf("%d",second);
        }
        else if(n>2)
        {
            for (int i = 3; i < n; i++) {
                third = first + second;
                first = second;
                second = third;
            }
        }
        System.out.println(third);
        sc.close();
    }
}