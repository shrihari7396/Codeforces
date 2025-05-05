#include <bits/stdc++.h>
using namespace std;

void solve(long long int n, long long int k, long long int x) {
    long long int total = (n * (n + 1)) / 2; // Sum of first n natural numbers
    
    if (total < x) { 
        cout << "NO" << endl;
        return;
    }

    long long int totalB = 0;
    for (int i = n; i > n - k; i--) {
        totalB += i;
    }
    
    long long int totalA = (k * (k + 1)) / 2;
    
    if (totalA <= x && x <= totalB) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, k, x;
        cin >> n >> k >> x;
        solve(n, k, x);
    }
    return 0;
}
