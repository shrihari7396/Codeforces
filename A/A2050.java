
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A2050 {
    private static void solve(List<Integer> list, int m) {
        int count=0;
        for(int i=0;i<list.size();i++) {
            if(list.get(i)>m){
                System.out.println(count);
                return;
            }
            if(m>0) {
                m-=list.get(i);
                count++;
            }
        }
        System.out.println(count);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0) {
            int n=sc.nextInt();
            int m=sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for(int i=0;i<n;i++) {
                String s=sc.next();
                list.add(s.length());
            }
            solve(list, m);
            t--;
        }
        sc.close();
    }
}
