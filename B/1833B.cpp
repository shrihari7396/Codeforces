#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &hash, string &s, int k) {
    int cnt=0;
    for(int i=0;i<hash.size();i++) {
        if(hash[i]%2) {
            cnt++;
        }
    }

    if(cnt-k == 1 || cnt == k) {
        cout<<"YES"<<endl;
        return;
    }
    
    if(cnt>k) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
}

int main(int argc, char** argv) {
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> hash(26,0);
        string s;
        int n,k;
        cin>>n>>k;
        cin>>s;
        for(int i=0;i<s.size();i++) {
            hash[(s[i]-'a')]++;
        }
        solve(hash, s, k);
    }
    
    return 0;
}