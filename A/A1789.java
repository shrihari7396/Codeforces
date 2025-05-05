
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A1789 {

    
    private static void solve(List<Integer> list) {
        int main=0;

    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t--!=0) {
            int n=sc.nextInt();
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                list.add(sc.nextInt());
            }
            solve(list);
        }
        sc.close();
    }
}
