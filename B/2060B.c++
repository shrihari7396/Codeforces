#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums) {
    int cnt=0;
    int n=nums.size();
    for(int i=0;i<n-1;i++) {
        nums[i]-=min(nums[i], nums[i+1]);
    }
    
    for(int i=0;i<n-1;i++) {
        if(nums[i]>nums[i+1]) {
            cnt++;
        }
    }
    if(cnt>0) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        vector<int> nums;
        int n;
        cin>>n;
        for(int i=0;i<n;i++) {
            int tmp;
            cin>>tmp;
            nums.emplace_back(tmp);
        }
        solve(nums);
    }
}