public class TowerOfHanoi {
    public static void toh(int n, char A, char B, char C)
    {
        if(n==1)
        {
            System.out.println("Move disk from " + A + "to" + C);
            return;
        }
        toh(n-1, A, C, B);
        System.out.println("Move disk from " + A + "to" + C);
        toh(n-1, B, A, C);
    }
    public static void main(String [] args)
    {
        int n = 3;
        toh(n, 'A', 'B', 'C');
    }
}
