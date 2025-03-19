// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int a1,a2,a3,a4,a5;
//     cin>> a1>>a2>>a4>>a5;
//     int maxi=INT_MIN;
    
//     a3 = a1+a2;
//     int fibCount=0;
    
//     fibCount=0;
//     if (a3 + a2 == a4) fibCount++;
//     if (a4 + a3 == a5) fibCount++;
//     if (a1 + a2 == a3) fibCount++;
//     maxi=max(maxi, fibCount);
    
//     fibCount=0;
//     a3=a4-a2;
//     if (a3 + a2 == a4) fibCount++;
//     if (a4 + a3 == a5) fibCount++;
//     if (a1 + a2 == a3) fibCount++;
//     maxi=max(maxi, fibCount);
    
//     fibCount=0;
//     a3=a5-a4;    
//     if (a3 + a2 == a4) fibCount++;
//     if (a4 + a3 == a5) fibCount++;
//     if (a1 + a2 == a3) fibCount++;
//     maxi=max(maxi, fibCount);
    
//     cout<<maxi<<endl;
    
//     return ;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    
    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to print numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
