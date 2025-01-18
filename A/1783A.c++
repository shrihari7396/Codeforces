#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i =0; i<n;i++) {
        cin >> nums[i];
    }

    if(nums[0] == nums[n-1]) {
        cout << "No" << endl;
    } else {
        cout << "YES" << endl;
        cout << nums[n-1] << " ";
        for(int i = 0; i <  n-1; i++) {
            cout << nums[i] << " ";
        }
    }

}

int main(int argc, char**argv) {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}