#include <bits/stdc++.h>
using namespace std;
void solve(int n, int k) {
    int ans=0;
    if(n%2==0 && k%2==1) {
        k--;
    } else if(n%2==1 && k%2==0) {
        ans++;
        n-=(k-1);
    } else if(n%2==1 && k%2==1) {
        ans++;
        n-=k;
        k--;
    }
    ans+=(n+k-1)/k;
    cout<<ans<<endl;
    return;
    
}
int main(int argc, char** argv) {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}