#include<bits/stdc++.h>

#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define REP(i, a, b) for(int i = (a); i <=(b); i++)
#define FORD(i, a, b) for(int i = (a); i > (b); i--)
#define REPD(i, a, b) for(int i = (a); i >=(b); i--)
#define TR(it, a) for(typeof((a).begin()) it = (a).begin(); it != (a).end(); ++it)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define BEGIN() int t;cin>>t;while(t--)
#define reset(x) memset(x,0,sizeof((x)))
#define SZ(a) (int((a).size()))
#define ALL(a) a.begin(), a.end()
#define PB push_back
#define MP make_pair
#define LL long long
#define LD long double
#define II pair<int, int>
#define X first
#define Y second
#define VI vector<int>
const int N = 100005;
using namespace std;
int main() {
    //fast()
    BEGIN(){    
        string str;
        cin>>str;
        int x=1;
        for(int i=str.size()-1;i>=0;i--){
            if(str[i]=='1'){
                str[i]='0';
                FOR(j,i+1,str.size())
                    str[j]='1';
                x=0;
                break;
            }
        }
        if(x==1) {
            for(int i=str.size()-1;i>=0;i--)
                cout<<1;
            cout<<endl;
        }
        else
            cout<<str<<"\n";
    }
}


