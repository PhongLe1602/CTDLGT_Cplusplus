#include<bits/stdc++.h>
using namespace std;
/*Start*/
/*

  by Phong5G
  
*/

#define ll long long
#define db double
#define fi first
#define se second
#define mp make_pair
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define f0(i,n) for (int i = 0; i < n; i++)
#define f1(i,n) for (int i = 1; i <= n; i++)
#define maxn 50004

typedef pair <int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const ll oo=1e13;
const int mod=1e9+7;
const int N=1e6+5;




main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	string s1,s2; cin >> s1 >> s2;
    	ll dp[1005][1005]={0};
    	ll d = 0;
    	for(int i = 1; i <= s1.size();i++){
    		for(int j = 1; j <= s2.size(); j++){
    			if(s1[i-1] == s2[j-1]){
    				dp[i][j] = dp[i-1][j-1] + 1;
				}else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				d = max(d,dp[i][j]);
			}
		}
		cout << d << endl;
    }
}
/*THE END*/

