import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A1834 {

    public static int solve(List<Integer> list) {
        int size = list.size();
        int n=0;
        for(int i=0;i<size;i++) {
            if(list.get(i)<0) n++;
        }
        int p=size-n;
        int op=0;
        while(n>p) {
            n--;
            p++;
            op++;
        }
        return op+(n%2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            List<Integer> list = new ArrayList<>();
            
            for (int i = 0; i < n; i++) {
                list.add(sc.nextInt());
            }

            System.out.println(solve(list));
        }
        
        sc.close();
    }
}
