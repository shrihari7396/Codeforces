import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A1869 {

    static public void solve(List<Integer> list) {
        int n=list.size();

        if(list.size()%2==0) {
            System.out.println(2);
            System.out.println(1+" "+n);
            System.out.println(1+" "+n);
        } else {
            System.out.println(4);
            System.out.println(1+" "+n);
            System.out.println(1+" "+(n-1));
            System.out.println(n-1+" "+n);
            System.out.println(n-1+" "+n);
        }
        
    }

    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t=sc.nextInt();
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