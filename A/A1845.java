import java.util.*;

public class A1845 {

    public static void Solve(int n, int k, int x) {
        if(k!=x && n%k==0) {
            System.out.println(1);
            for(int i=0;i<n/k;i++) {
                System.out.println(k);
            }
            return;
        } else if(k==x) {
            System.out.println();
        }


    }

    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0) {
            int n=sc.nextInt(),k=sc.nextInt(),x=sc.nextInt();
            Solve(n,k,x);
            t--;
        }    
    }
}