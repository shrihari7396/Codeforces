
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A1831 {
    public static void solve(List<Integer> list) {
        List<Integer> ans = new  ArrayList<>();
        int n=list.size();
        for(int i=0;i<list.size();i++) {
            ans.add(n-list.get(i)+1);
        }

        for(int i=0;i<list.size();i++) {
            System.out.print(ans.get(i)+" ");
        }
        System.out.print("\n");
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0) {
            int n=sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for(int i=0;i<n;i++) {
                int tmp = sc.nextInt();
                list.add(tmp);
            }
            solve(list);
            t--;
        }
        sc.close();
    }

}
