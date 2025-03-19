#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int n;
    cin>>n;
    set<int>nums;
    for(int i=0;i<n;i++) {
        int tmp ;
        cin>>tmp;
        nums.insert(tmp);
    }
    cout<<nums.size()<<endl;
    return 0;
}