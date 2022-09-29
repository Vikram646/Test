import java.util.Scanner;
class ChefandMask {
    public static void main(String[] args) {
        int x,y,t,dis,clo;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(int i =t;i>=1;t--)
        {
            x = sc.nextInt();
            y = sc.nextInt();
            dis = x*100;
            clo = y*10;
            if(dis>clo)
            {
                System.out.println("CLOTH");
            }
            else 
            System.out.println("DISPOSABLE");
        }
    }
}
