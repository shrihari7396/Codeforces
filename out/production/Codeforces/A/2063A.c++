#include <bits/stdc++.h>
using namespace std;

void solve(int l, int r) {
    if(l==1 && l==r) {
        cout<<1<<endl;
        return;
    }
    if(l==r) {
        cout<<0<<endl;
        return;
    }
    
    cout<<r-l<<endl;
    return ;
    
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int l,r;
        cin>>l>>r;
        solve(l, r);
    }
    return 0;
}