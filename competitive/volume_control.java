import java.util.Scanner;
public class volume_control {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t =sc.nextInt();
        for(int i = t;i>=1;i--)
        {
            int x,y;
            x= sc.nextInt();
            y= sc.nextInt();
            System.out.println(Math.abs(x-y));
        }
    }
    
}
