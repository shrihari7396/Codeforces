import java.util.*;
 
public class A1858 {
    private static void solve(int a, int b, int c) {
        int mn = Math.min(a, b); // Fixed Math.Min -> Math.min
        a -= mn;
        b -= mn;
        int turn = c & 1;
        if (a > b) {
            System.out.println("First");
        } else if (a < b) {
            System.out.println("Second");
        } else {
            if (turn == 0) {
                System.out.println("Second");
            } else {
                System.out.println("First");
            }
        }
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        int t;
        t = sc.nextInt();
        while (t != 0) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            solve(a, b, c);
            t--;
        }
        sc.close();
    }
}