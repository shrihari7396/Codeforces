#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = ((l*k)/nl);
    int total_lime = c*d;
    int total_salt = p / np;
    int max_toasts = min({total_drink, total_lime, total_salt})/n;
    cout << max_toasts << endl;
    return 0;
}