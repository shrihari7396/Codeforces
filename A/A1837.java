import java.util.*;

public class A1837 {

    private static void solve(int x,int k) {
        if(x%k!=0) {
            System.out.println(1);
            System.out.println(x);
        } else {
            System.out.println(2);
            
            System.out.println(1+" "+(x-1));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0) {
            int x,k;
            x=sc.nextInt();k=sc.nextInt();
            solve(x,k);
            t--;
        }
    }
}
