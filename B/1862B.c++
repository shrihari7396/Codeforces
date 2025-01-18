#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int t;
    cin >> t;
    while (t--) {
        int m ;
        cin >> m;
        int b[m];
        int size = INT_MIN;
        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }
        vector<int>ans;
        ans.emplace_back(b[0]);
        for(int i = 1; i < m; i++) {
            if(b[i-1] > b[i]) {
                ans.emplace_back(b[i]);
            } else {
                ans.emplace_back(b[i]);
            }
        }
        cout << ans.size() << endl;
        for(auto it : ans) {
            cout << it << " ";
        }
    }

    return 0;
}