
import java.util.Scanner;

public class C1791 {
    public static void solve(String s, int n) {
        int i=0,j=s.length()-1;
        while(i<j&&s.charAt(i)!=s.charAt(j)) {
            i++;j--;
        }
        System.out.println(j-i+1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            int n=sc.nextInt();
            String s=sc.next();
            solve(s,n);
        }
        sc.close();
    }
}
