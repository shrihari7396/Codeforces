#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count = 0;
    int count1 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '4') {
            count ++;
        }
        if(s[i] == '7') {
            count1 ++;
        }
    }
    if((count + count1 == s.size()) && (count > 0) && (count1 > 0)) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    vector<int> nums;
    return 0;
}