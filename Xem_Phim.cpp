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
    //ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	int w, n; cin >> w >> n;
    	int a[n+1];
    	f1(i,n) cin >> a[i];
    	ll dp[105][25005]={0};
    	ll m = 0;
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= w; j++){
    			dp[i][j] = dp[i-1][j];
    			if(j >= a[i] && dp[i][j] < dp[i-1][j-a[i]] + a[i]) dp[i][j] = dp[i-1][j-a[i]] + a[i];
    			m = max(m,dp[i][j]);
			}
		}
		cout << m << endl;
    }
}
/*THE END*/




