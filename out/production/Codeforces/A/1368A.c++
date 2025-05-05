#include <bits/stdc++.h>
using namespace std;

int main(void) {
int t;
cin >> t;
while(t > 0) {
    int a, b, n;
    cin >> a >> b >> n;
    int count = 0;
    while(max(a,b) <= n) {
        if(a >= b) {
            b += a;
        }else {
            a += b;
        }
        count ++;
    }
    cout << count << endl;
    t--;
}
    return 0;
}