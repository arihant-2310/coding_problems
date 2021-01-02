import java.util.*;
class stringListJava {
    public static void main(String args[])
    {
        int n;
        ArrayList<String> list = new ArrayList<String>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of words:");
        n = sc.nextInt();
        for(int i=0;i<n;i++)
        {
            String word = sc.next();
            list.add(word);
        }
        System.out.println("The list contains the following words:");
        for (String word : list) {
            System.out.println(word);
        }

    }
}