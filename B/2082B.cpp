#include <iostream>
using namespace std;

long long applyNOperations(long long x, long long n) {
    while (n--) {
        if (x == 0) return 0;
        x /= 2;
    }
    return x;
}

long long applyMOperations(long long x, long long m) {
    while (m--) {
        if (x <= 1) return x;
        x = (x + 1) / 2;
    }
    return x;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x, n, m;
        cin >> x >> n >> m;
        cout << applyNOperations(applyMOperations(x, m), n) << " "
             << applyMOperations(applyNOperations(x, n), m) << "\n";
    }
    return 0;
}
