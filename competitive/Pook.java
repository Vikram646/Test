import java.util.Scanner;
public class Pook {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t;
        t = sc.nextInt();
        for(int i=1;i<=t;i++)
        {
            int n;
            n = sc.nextInt();
            if(n==2 || n ==3)
            {
                n-=1;
                System.out.println(n);
            }
            else
            System.out.println(n);
        }
    }
    
}