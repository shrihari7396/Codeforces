
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class A2092 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while (t--!=0) { 
            int n=sc.nextInt();
            int[] arr=new int[n];
            for (int i = 0; i < n; i++) {
                arr[i]=sc.nextInt();
            }
            Arrays.sort(arr);
            Collections.emptySortedMap();
            System.out.println(arr[n-1]-arr[0]);
        }
        sc.close();
    }
    
}