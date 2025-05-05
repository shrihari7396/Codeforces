#include <iostream>
using namespace std;

void solve(string& s) {
    int cnt=0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='0') cnt++;
    }

    if(cnt==0) {
        cout<<s.size()-1<<endl;
        return ;
    }

    cnt=0;
    int cnt_last=0;
    int i=s.size()-1;

    while(i>=0 && s[i]=='0') {
        cnt_last++;
        i--;
    }

    for(int j=0;j<i;j++) {
        if(s[j]!='0') {
            cnt++;
        }
    }

    cout<<cnt+cnt_last<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        solve(s);
    }
    
    return 0;
}