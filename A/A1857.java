import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A1857 {
    private static void solve(List<Integer> list) {
        int even = 0;
        int odd = 0;

        for (int i = 0; i < list.size(); i++) {
            if (list.get(i) % 2 == 1) {
                odd++;
            } else {
                even++;
            }
        }
        if(even == 0) {
            if(odd%2==0) {
                System.out.println("YES");
                return;
            } else {
                System.out.println("NO");
                return;
            }
        }

        if(odd==0) {
            if(even>0) {
                System.out.println("YES");
                return;
            }
        }

        if(odd%2==0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t=sc.nextInt();
        while(t!=0) {
            int n;
            n=sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for(int i=0; i<n;i++) {
                int tmp = sc.nextInt();
                list.add(tmp);
            }
            // System.out.println(t);
            solve(list);
            t--;
        }
        sc.close();
    }
}
