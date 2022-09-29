import java.util.Scanner;

public class passorfail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t,x,p,n;
        t = sc.nextInt();
        for(int i=t;i>=1;i--)
        {
            n = sc.nextInt();
            x= sc.nextInt();
            p= sc.nextInt();
            int y = x*3;
            int z = n-x;
            int total = y-z;
            if(total>=p)
            {
                System.out.println("PASS");
            }
            else
            System.out.println("FAIL");
        }
    }
    
}
