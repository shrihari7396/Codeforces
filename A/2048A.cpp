#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin>>x;
    if(x%33) {
        cout<<"No"<<endl;
    } else {
        cout<<"Yes" << endl;
    }
}

int main(int argc, char** argv) {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}