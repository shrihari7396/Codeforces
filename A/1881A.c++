#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
         int n,m;
         cin>>n>>m;
         string x,s;
         cin>>x;
         cin>>s;
         int cnt= 0;
         while(cnt<=5){
            if(x.find(s) != string:: npos){
                break;
            }
            else{
                cnt++;
                x+=x;
                }
            if(cnt > 5){
                cnt = -1;
                break;
            }
         }
         cout<<cnt<<endl;
    }
    return 0;
}