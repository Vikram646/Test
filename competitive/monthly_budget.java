import java.util.Scanner;
public class monthly_budget 
{
    public static void main(String[] args) {
        
    Scanner sc = new Scanner(System.in);
    int t;
    t = sc.nextInt();
    for(int i=t;i>=1;i--)
    {
        int x,y;
        x =sc.nextInt();
        y = sc.nextInt();
        if(x>=y*30)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
    }

}
}
