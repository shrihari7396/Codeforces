#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='1') {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}