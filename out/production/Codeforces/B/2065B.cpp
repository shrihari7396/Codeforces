#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    vector<int> hash(26, 0);
    bool check=false;
    for(int i=0;i<s.size()-1;i++) {
        if(s[i]==s[i+1]) {
            check=true;
        }
    }
    if(check) {
        cout<<1<<endl;
    } else {
        cout<<s.size()<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}