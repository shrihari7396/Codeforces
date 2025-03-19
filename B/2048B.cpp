#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int>& nums) {
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return;
}

void solve() {
    int n,k;
    cin>>n>>k;
    int cnt=1;
    vector<int> nums(n,-1);
    
    if(k==1 || k==n) {
        for(int i=0;i<n;i++) {
            nums[i]=i+1;
        }
        printVec(nums);
        return;
    } else {
        int i=0;
        int curr=1;
        while(i<nums.size()) {
            if(cnt==k) {
                nums[i]=curr++;
                cnt=0;
            }
            cnt++;
            i++;
        }
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==-1) {
                nums[i]=curr++;
            }
        }
        printVec(nums);
    }
}

int main(int argc, char** argv) {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}