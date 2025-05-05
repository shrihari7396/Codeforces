#include <bits/stdc++.h>
using namespace std;
 
void solve(int l, int r) {
    if(2*l <= r) {
        cout<<l<<" "<<2*l<<endl;
    } else {
        cout<< -1 << " " << -1 << endl;
    }
    return ;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int l,r;
        cin>>l>>r;
        solve(l,r);
    }
    return 0;
}