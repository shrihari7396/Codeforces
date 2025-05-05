import java.util.Scanner;

public class A1805 {

    public static void solve(int ans, int n) {
        if(ans==0) {
            System.out.println(ans);
        } else {
            if(n%2==0) {
                System.out.println(-1);
            } else {
                System.out.println(ans);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            int n=sc.nextInt();
            int ans=0;
            for (int i = 0; i < n; i++) {
                ans^=sc.nextInt();
            }
            solve(ans, n);
        }
        sc.close();
    }
}
