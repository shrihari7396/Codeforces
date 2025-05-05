#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Perform (a * b) % mod safely
ll mulmod(ll a, ll b, ll mod) {
    ll result = 0;
    a %= mod;
    while (b) {
        if (b & 1) result = (result + a) % mod;
        a = (a * 2) % mod;
        b >>= 1;
    }
    return result;
}

// Perform (base^exp) % mod
ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp) {
        if (exp & 1) result = mulmod(result, base, mod);
        base = mulmod(base, base, mod);
        exp >>= 1;
    }
    return result;
}

// Miller-Rabin test for a single base
bool millerTest(ll d, ll n, ll a) {
    ll x = power(a, d, n);
    if (x == 1 || x == n - 1) return true;
    while (d != n - 1) {
        x = mulmod(x, x, n);
        d *= 2;
        if (x == 1) return false;
        if (x == n - 1) return true;
    }
    return false;
}

// Miller-Rabin primality test
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;

    // Write n-1 as 2^r * d
    ll d = n - 1;
    while (d % 2 == 0) d /= 2;

    // Use deterministic bases for 64-bit integers
    vector<ll> bases = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (ll a : bases) {
        if (a >= n) break;
        if (!millerTest(d, n, a)) return false;
    }
    return true;
}


void solve(ll x, int y) {
    if(!isPrime(x)) {
        cout<<"NO"<<endl;
        return;
    }

    if(x==1 || x==2) {
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll x,y;
        cin>>x>>y;

        solve(x,y);
    }
    
    return 0;
}