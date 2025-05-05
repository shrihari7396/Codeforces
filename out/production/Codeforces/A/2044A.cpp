#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n; i++) {
        for(int j=1;j<=n;j++) {
            if((i+j) == n) cnt++;
        }   
    }
    cout<<cnt<<endl;
}
 
int main(int argc, char** argv) {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}