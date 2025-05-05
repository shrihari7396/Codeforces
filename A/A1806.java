import java.util.Scanner;

public class A1806 {
    private static void  solve(int a, int b, int c, int d) {
        if(a==c && b==d) {
            System.out.println(0);
            return ;
        }
        if(b>d) {
            System.out.println(-1);return;
        }
        int tmp = d-b; 
        a += tmp;
        if(a<c) {
            System.out.println(-1);
            return  ;
        }
        System.out.println(tmp+(a-c));
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            int a=sc.nextInt(), b=sc.nextInt(), c=sc.nextInt(), d=sc.nextInt();
            solve(a,b,c,d);
        }
        sc.close();
    }
}
