#include <bits/stdc++.h>
using namespace std;
 
void solve(vector<int>& a) {
    sort(a.begin(), a.end());
    int f=0;
    for(int i=0;!f&&i<a.size()-1;i++) {
        if(a[i]!=a[i+1]) {
            f=1;
            cout<<i+1<<" "<<a.size()-i-1<<"\n";
            for(int j = 0;j<=i;j++)  {
                cout<<a[j]<<" ";
            }
            cout<<endl;
            for(int j=i+1;j<a.size();j++) {
                cout<<a[j]<<" ";
            }
        }
    }
    if(!f) {
        cout<<-1<<endl;
    }
    cout<<endl;
}
 
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        solve(a);
    }
    return 0;
}