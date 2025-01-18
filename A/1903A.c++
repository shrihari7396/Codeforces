#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums, int n, int k) {
    int cnt = 0;
    for(int i = 0; i < n-1; i++) {
        if(nums[i] > nums[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {         
        int n , k;
        cin >> n >> k;

        vector<int> boxes(n,-1);

        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            boxes[i] = temp;
        }

        if((k >= 2) || (k == 1 && isSorted(boxes, n, k))) {
            cout << "YES" << endl;
        } else if(k == 1 && !isSorted(boxes, n, k)) {
            cout << "NO" << endl;
        }

    }
    return 0;
} 
/*// for(int i = 0; i < n-k; i++) {
        //     if(boxes[i] > boxes[i+k]) {
        //         swap(boxes[i], boxes[i+k]);
        //     }
        // }
        bool swapped = true;
        while(swapped) {
            swapped = false;
            // Perform a single pass of swapping based on the gap `k`
            for(int i = 0; i < n - k; i++) {
                if(boxes[i] > boxes[i + k]) {
                    swap(boxes[i], boxes[i + k]);
                    swapped = true;  // Set flag to true if a swap occurred
                }
            }
        }

        int cnt = 0;

        for(int i = 0; i < n -1; i++) {
            if(boxes[i] > boxes[i+1]) {
            cnt ++;
            }
        }

        if(cnt == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }*/