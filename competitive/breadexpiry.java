import java.util.Scanner;
class breadexpiry
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t= sc.nextInt();
        for(int i =t;t>=1;t--)
        {
            int m,n,k;
            n = sc.nextInt();
            m = sc.nextInt();
            k = sc.nextInt();
            if(m*k>=n)
            {
                System.out.println("YES");
            }
            else
            System.out.println("NO");
        }
    }
}