#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m;
    int n;
    if(m<4 && n<4) {
        cout << "NO" << endl;
        return;
    }
    vector<vector<char>> carpet(m, vector<char>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> carpet[i][j];
        }
    }

    int hor=0,ver=0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(carpet[i][j] == 'v' || )
        }
    }


    return ;
}

int main(int argc, char**argv) {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}