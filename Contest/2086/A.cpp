#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, int sum, int x, int k) {

    
    long long n=nums.size();
    long long rounds = x/sum;
    rounds--;
    long long thisSum = 0;
    long long tmp = 0;
    if(sum*k < x) {
        cout<<0<<endl;
        return;
    }
    if(sum*k == x) {
        cout<<1<<endl;
        return;
    }
    if(thisSum==x){
        cout<<rounds*n<<endl;
        return;
    }
    while(thisSum<x){
        if(thisSum+sum < x) {
            tmp+=n;
            thisSum+=sum;
        }
        else{
            for(int i=nums.size()-1;i>=0;i--) {
                thisSum += nums[i];
                
                if(thisSum >= x) {
                    break;
                }
                tmp++;
            }

        }

    }
    cout<<n*k - tmp<<endl;
    return;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n , k , x;
        cin>>n>>k>>x;
        vector<int> a(n);
        long long sum =0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        solve(a, sum,x, k);
    }
    return 0;
}





