#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
    cin >> n;
    if(n == 1) {
        cout << 0 << endl;
        continue;
    }
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxi = *max_element(a.begin(), a.end());
    int mini = *min_element(a.begin(), a.end());
    
    int ans = (maxi - mini) * (n - 1);
    cout << ans << endl;
    }
    return 0;
}
