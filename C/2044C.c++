    #include <iostream>
    #include <vector>
    using namespace std;

    void solve() {
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int firstRow=min(m,a);
        int secondRow=min(m,b);
        int firstRowRemain=m-firstRow;
        int secondRowRemain=m-secondRow;

        int cFilledInFirst=min(c,firstRowRemain);
        c-=cFilledInFirst;
        int cFilledInSecond=min(c,secondRowRemain);
        c-=cFilledInSecond; 
        cout<<(firstRow+secondRow+cFilledInFirst+cFilledInSecond)<<endl;
    }
        
    
    int main(int argc,char** argv) {
        int t;
        cin>>t;
        while (t--)
        {
            solve();
        }
        
        return 0;
    }