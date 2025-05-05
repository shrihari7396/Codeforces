#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, m, total, cnt=0;
    cin>>n>>m>>total;
    vector<int>b(n),c(m);
    
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    for(int i=0;i<m;i++) {
        cin>>c[i];
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    if(b[b.size()-1]+c[c.size()-1] <= total) {
        cout<<b.size()*c.size() <<endl;return;
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if((c[i]+b[j]) <= total) {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}