#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums) {
    int odd=0, even=0;
    for(int i=0;i<nums.size();i++) {
        if(nums[i]%2) {
            odd++;
        } else {
            even++;
        }
    }
    
    if((even==nums.size()) || (odd==nums.size() && nums.size()%2==0)) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> store(n);
        for(int i=0;i<n;i++) {
            cin>>store[i];
        }
        solve(store);
    }
}