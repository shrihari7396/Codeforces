#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>& nums , int k) {
    int n=nums.size();
    int ans=0;

    if(k==1) {
        for(int i=0;i<n;i++) {
            ans=max(ans, nums[i]+nums[0]);
        }
        for(int i=0;i<n;i++) {
            ans=max(ans, nums[i]+nums[n-1]);
        }
    } else {
        sort(nums.begin(), nums.end());
        for(int i=0;i<k+1;i++) {
            ans+=nums.back();
            nums.pop_back();
        }
    }
    cout<<ans<<endl;
    return ;
}
int main(int argc, char** argv) {
    int t;cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int k;cin>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++) {
            cin>>vec[i];
        }
        solve(vec, k);
    }
    return 0;
}