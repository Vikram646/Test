import java.util.Scanner;
public class notebook {

    public static void main(String[] args) {
        int pulp,notebook,pages;
        Scanner sc = new Scanner(System.in);
        int t = 3;
        while(t!=0) {
            System.out.println("Enter the pulp in kg : ");
            pulp = sc.nextInt();
            t--;
        }
        for(int i=1;i<=3;i++)
        {
        pages = 1000*pulp;
        notebook = pages/100;
        System.out.println("The notebook that can be from pulp is "+notebook);
    }
}
