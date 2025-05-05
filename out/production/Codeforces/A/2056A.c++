#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        vector<pair<int, int>> operations(n);

        for (int i = 0; i < n; ++i) {
            int xi, yi;
            cin >> xi >> yi;
            operations[i] = {xi, yi};
        }


        int sumx=m, sumy=m;

        for(int i=0;i<n;i++) {
            sumx+=operations[i].first;
            sumy+=operations[i].second;
        }


        
        cout<<2*(sumx+sumy-2)<<endl;
    }
    return 0;
}