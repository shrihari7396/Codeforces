#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& a, int b) {
    int cnt=0;
    int index=0;
    for(int i=0;i<a.size();i++) {
        a[i]=b-a[i];
    }
    for(int i=0;i<a.size()-1;i++) {
        if(a[i]>a[i+1]) {
            cnt++;
        }
    }
    if(cnt==0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int m,n;
        cin>>n>>m;
        vector<int> a(n,0);
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int b;
        cin>>b;
        solve(a, b);

    }
    return 0;
}