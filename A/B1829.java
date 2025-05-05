
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class B1829 {

    public static void solve(List<Integer> list) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<list.size();i++) {
            if(list.get(i)==0) {
                cnt++;
                maxi=Math.max(cnt, maxi);
            } else {
                maxi = Math.max(maxi, cnt);
                cnt=0;
            }
        }
        System.out.println(maxi);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            int n = sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for(int i=0;i<n;i++) {
                int tmp = sc.nextInt();
                list.add(tmp);
            }
            solve(list);
        }

        sc.close();
    }
}
