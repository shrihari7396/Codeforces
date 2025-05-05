#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y) {
    if(y>x+1) {
        cout<<"No"<<endl;
    } else if((x%9+1)%9 == y%9) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x,y;
        cin>>x>>y;
        solve(x,y);
    }
    return 0;
}