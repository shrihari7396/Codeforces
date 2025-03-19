import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class C2060{
    private  static void solve(int n, int k, List<Integer> list) {
        int ans=0;
        Collections.sort(list);
        int i=0;int j=n-1;
        while(i<j) {
            if(list.get(i)+list.get(j) > k) {
                j--;
            } else if(list.get(i)+list.get(j)<k) {
                i++;
            } else {
                i++;
                j--;
                ans++;
            }
        }
        System.out.println(ans);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);        
        int t=sc.nextInt();
        while(t!=0) {
            int n=sc.nextInt(), k=sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                int tmp=sc.nextInt();
                list.add(tmp);
            }
            solve(n, k, list);
            t--;
        }
    }
}