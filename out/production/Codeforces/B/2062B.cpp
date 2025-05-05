#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums) {
    if(nums.size()==1) {
        cout<<"YES"<<endl;
        return;
    }

    for(int i=0;i<nums.size();i++) {
        int left=2*i, right=2*(nums.size()-i-1);
        if(nums[i]<=left || nums[i]<=right) {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    return ;
}

int main() {
    int t;
    cin>>t;
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