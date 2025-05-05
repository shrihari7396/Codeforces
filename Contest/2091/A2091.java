import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A2091 {
    public static void solve(List<Integer> list) {
        
        int zero = 0, one = 0, two = 0, three = 0, five = 0;
        int result = 0;
        
        for(int i=0;i<list.size();i++) {
            int num=list.get(i);
            switch (num) {
                case 0:
                    zero++;
                    break;
                case 1:
                    one++;
                    break;
                case 2:
                    two++;
                    break;
                case 3:
                    three++;
                    break;
                case 5:
                    five++;
                    break;
                default:
                    break;
            }

            if(zero>=3 && one >=1 && two>=2 && three>=1 && five>=1) {
                System.out.println(i+1);
                return;
            }
        }
        System.out.println(0);
        return ;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            List<Integer>list = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                int num = sc.nextInt();
                list.add(num);
            }
            solve(list);
        }
        
        sc.close();
    }
}
