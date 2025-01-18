#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    
    vector<int> nums(N);
    vector<int> ans(N);

    for(int i = 0; i < N; i++) {
        cin >> nums[i];
        ans[nums[i] - 1] = i + 1;       
    }
    for(int i = 0; i < N; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}