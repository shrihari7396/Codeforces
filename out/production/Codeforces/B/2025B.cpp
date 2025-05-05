#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            cnt++;
        }
    }

    if (cnt >= 2) {
        cout << "NO" << endl;
        return;
    } else if (cnt == 0) {
        cout << "YES" << endl;
    } else { // cnt == 1
        int mx = 0;
        int mn = INT_MAX; // Correct initialization

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                mx = b[i] - a[i];
            } else {
                mn = min(mn, a[i] - b[i]);
            }
        }

        if (mx <= mn) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
