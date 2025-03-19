#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n, m;
        cin >> n >> m;

        unordered_map<int, vector<int>> map;

        for(int i=0;i<n;i++) {
            vector<int> tmp(m,0);
            for(int j=0;j<m;j++) {
                cin>>tmp[j];
            }
            sort(tmp.begin(), tmp.end());
            map[i]=tmp;
        }
        
        t--;
    }

    return 0;
}
