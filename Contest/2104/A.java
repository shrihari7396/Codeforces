import java.util.Scanner;

public class A {

    private static void solve(int a, int b, int c) {
        int t = b-a;
        a+=t;
        c-=t;
        if(a <= c && (a+b+c)%3==0) {
            System.out.println("YES"); 
            return;
        }

        System.out.println("NO");

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- != 0) {
            int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
            solve(a, b, c);
        }
    }
}
