#include <bits/stdc++.h>
using namespace std;

int main(void) {
string s;
cin >> s;
int n = s[0];
if(n > 97) {
    n = n - 32;
    s[0] = n;
}
cout << s << endl;
    return 0;
}