#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
    int t;
    cin>>t;

    while(t--) {
        int m,n;
        cin>>m>>n;

        vector<vector<int>> nums(m, vector<int>(n,0));
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                char ch;
                cin>>ch;
                nums[i][j]=ch-'0';
            }
        }
        int r=0,c=0;

        for(int i=0;i<m;i++) {
            int sum=0;
            for(int j=0;j<n;j++) {
                sum^=nums[i][j];
            }
            if(sum) r++;
        }

        
        for(int i=0;i<n;i++) {
            int sum=0;
            for(int j=0;j<m;j++) {
                sum^=nums[j][i];
            }
            if(sum) c++;
        }

        cout<<max(r,c)<<endl;

    }
    return 0;
}