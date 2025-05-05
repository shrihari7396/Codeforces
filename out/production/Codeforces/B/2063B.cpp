#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, int l, int r) {
    sort(nums.begin(), nums.end());
    int index=r-l;
    int ans=0;
    for(int i=0;i<=index;i++) {
        ans+=nums[i];
    }
    cout<<ans<<endl;
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> vec(n,0);
        for(int i=0;i<n;i++) {
            cin>>vec[i];
        }
        solve(vec, l, r);
    }
}