
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class A2069 {
    private static void solve(List<Integer> list, int n) {
        if(n==3) {
            System.out.println("YES");
            return;
        }

        

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            int n=sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for(int i=0;i<n-1;i++) {
                list.add(sc.nextInt());
            }
            solve(list, n);
        }
        sc.close();
    }
}
