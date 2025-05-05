#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            nums.emplace_back(temp);
        }
        if(n == 3) {
            int sum = max(nums[0], nums[2]) + 2;
            cout << sum << endl;
        } else {
            
        }

    }
    return 0;
}