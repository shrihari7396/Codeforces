#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n ;
    cin >> n;
    int nums[n];
    for(int i = 0; i < n; i++) {
        int temp ;
        cin >> nums[i];
    }
    int count = 1;
    int maxlength = 1;
    for(int i = 1; i < n; i++) {
        if(nums[i-1] < nums[i]) {
            count ++;
            maxlength = max(maxlength, count);
        }
        else {
            count = 1;
        }
    }
    cout << maxlength << endl;
    return 0;
}