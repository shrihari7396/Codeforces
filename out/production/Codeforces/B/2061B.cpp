#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums) {
    map<int, int> m;
    for(auto it:nums) {
        m[it]++;
    }
    vector<int> ans;
    for(auto &it: m) {
        if(it.second>=2) {
            ans.emplace_back(it.first);
            ans.emplace_back(it.first);
            break;
        }
    }

}

int main(int argc, char**argv) {

    int t;cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> nums(n,0);
        for(int i=0;i<n;i++) {
            cin>>nums[i];
        }
        solve(nums);
    }
    return 0;
}