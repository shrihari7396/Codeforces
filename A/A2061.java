import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A2061 {

    private static void solve(List<Integer> list) {
        int e = 0, o = 0;
        for (int it : list) {
            if (it % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }
        if(e==0) {
            System.out.println(list.size()-1);
        } else {
            System.out.println(o+1);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t != 0) {
            int n = sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                int tmp = sc.nextInt();
                list.add(tmp);
            }
            solve(list);
            t--;
        }
        sc.close();
    }
}
