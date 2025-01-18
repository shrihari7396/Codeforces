#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    vector<int> a;
    int min1 = INT_MAX;
    for(int i = 0; i < N; i++) {
        int temp ;
        cin >> temp;
        min1 = min(min1, abs(temp));
    }
    cout << min1 << endl;
    return 0;
}