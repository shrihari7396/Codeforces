import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class B2091 {

    public static void solve(List<Integer> list, int n, int x) {
        if(n==1) {
            if(list.get(0) >= x) {
                System.out.println(1);
                return;
            } else {
                System.out.println(0);
                return;
            }
        }
        Collections.sort(list);
        int ans=0;
        int sum=0;
        for(int i=list.size()-1;i>=0;i--) {
            if(list.get(i) >= x) {
                ans++;
            } else {
                sum+=1;
                if(sum*list.get(i)>=x) {
                    ans++;
                    sum=0;
                }
            }
        }
        System.out.println(ans);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            List<Integer> list = new ArrayList<>();
            int n=sc.nextInt(), x=sc.nextInt();
            for(int i=0;i<n;i++) {
                list.add(sc.nextInt());
            }
            solve(list, n, x);
        }
        sc.close();
    }
}