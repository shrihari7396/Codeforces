
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;



public class A2059 {

    private static void solve(List<Integer> list, List<Integer> list2) {
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t!=0) {
            int n=sc.nextInt();
            List<Integer> list1 = new ArrayList<>();
            List<Integer> list2 = new ArrayList<>();

            for(int i=0;i<n;i++) {
                int tmp=sc.nextInt();
                list1.add(tmp);
            }
            for(int i=0;i<n;i++) {
                int tmp=sc.nextInt();
                list2.add(tmp);
            }
            solve(list2, list2);
            t--;
        }
        // A2060 s=new A2059();
    }
}