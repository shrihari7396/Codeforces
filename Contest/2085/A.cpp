#include <bits/stdc++.h>
using namespace std;

void solve(string s, int n, int k) {
    if(s[0] < s[n-1]) {
        cout<<"YES"<<endl;
        return;
    }

    int cnt=0;
    for(int i=0;i<n;i++) {
        if(s[i]>s[0]) {
            cnt++;
        }
    }

    if(k!=0 && cnt>0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(s,n,k);
    }
    return 0;
}
