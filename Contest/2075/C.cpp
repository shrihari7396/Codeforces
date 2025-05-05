#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        
        long long ans = 0;
        for (int k = 1; k < n; k++) {
            int x = m - (lower_bound(a.begin(), a.end(), k) - a.begin());
            int y = m - (lower_bound(a.begin(), a.end(), n - k) - a.begin());
            ans += x * y - min(x, y);
        }
        cout << ans << "\n";
    }
    return 0;
}
