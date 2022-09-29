import java.util.Scanner;
class manipulate
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x,y,t;
        t= sc.nextInt();
        for(int i = t;i>=1;i--)
        {
        x = sc.nextInt();
        y = sc.nextInt();
        if(y<=x)
        {
            System.out.println("YES");
        }
        else
        System.out.println("NO");
    }
}