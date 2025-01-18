#include <bits/stdc++.h>
using namespace std;

int main(void) {

    int t;
    cin >> t;
    while(t > 0) {
        int N;
        cin >> N;
        cout << N/10 + N%10 << endl;
        t--;
    }
    return 0;
}