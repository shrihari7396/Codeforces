
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;


public class B1875 {
    public static void solve(List<Integer> list, int a, int b, int c) {
        int ans = 1;
        Collections.sort(list);
        for (int i = 0; i < list.size(); i++) {
            if (a > c) {
                c += Math.min(c + list.get(i), a);
            } else {
                ans+=c;
                c=1;
            }
        }
        System.out.println(ans);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            int a=sc.nextInt(),b=sc.nextInt(),c=sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for(int i=0;i<b;i++) {
                list.add(sc.nextInt());
            }
            solve(list, a, b, c);
        }
        sc.close();
    }   
}