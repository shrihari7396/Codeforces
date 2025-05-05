#include <bits/stdc++.h>
using namespace std;

void solve(string s) {    
    if(s=="us") {
        cout<<"i"<<endl;
        return;
    }
    string ans="";
    for(int i=0;i<s.size()-2;i++) {
        ans+=s[i];
    }
    ans+="i";
    cout<<ans<<endl;
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