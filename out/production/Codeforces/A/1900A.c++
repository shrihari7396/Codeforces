#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
	cin >> t; 
	while( t--){
		//cout << "--------Case #" << tcase << ": --------\n";
		int n;
		cin >> n; 
		string s;
		cin >> s; 
		int ans = 0, cnt = 0;
		for(int i = 0; i < n - 2; ++i){
			if(s.substr(i, 3) == "..."){
				ans = 2;
				break;
			}
		}
		if(ans == 0){
			for(auto i: s) if(i == '.') ++cnt;
			cout << cnt << endl;
		}else cout << ans << endl;
	}
	return 0;
}
