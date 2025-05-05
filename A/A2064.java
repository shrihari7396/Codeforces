import java.util.Scanner;

public class A2064 {

    private static void solve(String s) {
        int one=0,zero=0;
        for (int i = 0; i < s.length(); i++) {
            if(s.charAt(i)=='1') {
                one++;
            } else {
                zero++;
            }
        }
        
        if(one==s.length()) {
            System.out.println(1);
            return;
        }

        if(zero==s.length()) {
            System.out.println(1);
            return;
        }
        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t1=sc.nextInt();
        while(t1--!=0) {
            int n=sc.nextInt();
            String t= sc.next();
            solve(t);
        }

        sc.close();
    }
}