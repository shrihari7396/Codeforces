
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;



public class A1828 {

    public static void solve(int n, List<Integer> list) {
        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            int n=sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for(int i=0;i<n;i++) {
                list.add(sc.nextInt());
            }
            solve(n,list);
        }
        sc.close();
    }
}
