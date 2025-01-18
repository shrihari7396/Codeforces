#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> nums(7);
    for(int i = 0; i < 7; i++) {
        cin >> nums[i];
    }
    int n1 = nums.size();
    int j = 0;
    int count  = 0;
    int sum = 0;
    while(sum < n) {
        sum += nums[j];
        if(sum >= n) {
            break;
        }
    }
        j = (j + 1) % 7;
    cout << j + 1 << endl;
    return 0;
}