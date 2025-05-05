#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int i=0;
    int j=s.size();
    reverse(s.begin(), s.end());
    for(int i=0;i<s.size();i++) {
        if(s[i]=='q') {
            s[i]='p';
        } else if(s[i] == 'p') {
            s[i]='q';
        }
    }
    cout<<s<<endl<<endl;
}

int main()
{
    int n;
    cin>>n;
    while(n--) {
        solve();
    }
    return 0;
}