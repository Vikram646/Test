import java.util.Scanner;


public class cheap_cab
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        for(int i = t;i>=1;i--)
        {
            int x,y;
            System.out.println("Enter the first and second price : ");
            x= sc.nextInt();
            y= sc.nextInt();
            if(x==y)
            {
                System.out.println("ANY");
            }
            else if(x>y)
            {
                System.out.println("SECOND");
            }
            else{
                System.out.println("FIRST");

            }
        }
    }

}