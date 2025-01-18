#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<int> nums(size);
        for (int i = 0; i < size; i++) {
            cin >> nums[i];
        }
        if (size == 1 || size == 2) {
            cout << "Yes" << endl;
            continue;
        }

        unordered_map<int, int> m;
        for (int i = 0; i < size; i++) {
            m[nums[i]]++;
        }

        if (m.size() > 2) {
            cout << "No" << endl;
        } else {
            auto it = m.begin();
            int a = it->second;
            if (m.size() == 1) {
                cout << "Yes" << endl;
            } else {
                it++;
                int b = it->second;
                if (a == b || abs(a - b) == 1) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            }
        }
    }
    return 0;
}