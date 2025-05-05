#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c;
    vector<int> nums(3);
    cin >> a >> b >> c;
    nums[0] = a; nums[1] = b; nums[2] = c;
    sort(nums.begin(), nums.end());

    int total = 0;
    total+=nums[1]-nums[0];
    total+=nums[2]-nums[1];

    cout << total << endl;

    return 0;
}