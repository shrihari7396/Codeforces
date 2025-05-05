#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n%3 == 2) cout << "First" << endl;
        else if(n%3 == 1) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    return 0;
}