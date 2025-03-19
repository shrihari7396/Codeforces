
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class A1853 {

    private static void slove(List<Integer> list) {
        int min = Integer.MAX_VALUE;
        for(int i=0;i<list.size()-1;i++) {
            if(list.get(i)>list.get(i+1)) {
                System.out.println(0);
                return;
            }
            min = Math.min(min, list.get(i+1)-list.get(i));
        }
        min=min/2;
        min=min+1;
        System.out.println(min);
    }

    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t!=0) {
            int n=sc.nextInt();
            List<Integer> list=new ArrayList<>();
            for(int i=0;i<n;i++) {
                int tmp=sc.nextInt();
                list.add(tmp);
            }
            slove(list);
            t--;
        }
        
    }
}
