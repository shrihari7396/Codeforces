#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& a, int b) {
    int cnt=0;
    vector<int>index;
    
    for(int i=0;i<a.size();i++) {
        if(a[i]>a[i+1]) {
            index.emplace_back(i);
        }
    }
    for(int i=0;i<index.size();i++){
        a[index[i]] = b-a[index[i]];
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