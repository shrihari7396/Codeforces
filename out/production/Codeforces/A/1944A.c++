// #include <iostream>
// #include <vector>
// using namespace std;

// void roll(vector<int>& nums) {
//     int n = nums.size();
//     if(n == 0) return ;
//     int tmp = nums[0];
//     for(int i = 0; i < n-1; i++){
//         nums[i] = nums[i+1];
//     }
//     nums[n-1] = tmp;
// }


// void print_vector(const vector<vector<int>>& s) {
//     for(const auto& row : s) {
//         for(const auto& element : row) {
//             cout << element << " ";
//         }
//         cout << endl;
//     }
// }


// vector<vector<int>> rearrange(vector<vector<int>>& nums) {
//     if(nums.empty()) return nums;

//     int n = nums.size();
//     vector<int> temp = nums[0];

//     for(int i = 0; i < n-1; ++i) {
//         nums[i] =nums[i+1];
//         roll(nums[i]);
//     }

//     nums[n-1] = temp;
//     roll(nums[n-1]);

//     return nums;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t > 0)
//     {   int n, m;
//     cin >> n >> m;
//         vector<vector<int>> s(n, vector<int>(m));
//         for(int i =0; i < n; i++) {
//             for(int j = 0; j < m; j++) {
//                 cin >> s[i][j] ;
//             }
//         }
//         vector<vector<int>> nums1 = rearrange(s);
//         print_vector(nums1);
//     }
    
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_matrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

bool is_valid(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    int n = a.size();
    int m = a[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void solve() {
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<int> elements;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                elements.push_back(a[i][j]);
            }
        }
        
        if (n == 1 && m == 1) {
            cout << "-1" << endl;
            continue;
        }

        sort(elements.begin(), elements.end());

        vector<vector<int>> b(n, vector<int>(m));
        bool valid = false;

        // Try to construct a valid b matrix by rotating
        for (int k = 1; k < elements.size(); ++k) {
            rotate(elements.begin(), elements.begin() + k, elements.end());

            int idx = 0;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    b[i][j] = elements[idx++];
                }
            }

            if (is_valid(a, b)) {
                valid = true;
                break;
            }
        }

        if (valid) {
            print_matrix(b);
        } else {
            cout << "-1" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
