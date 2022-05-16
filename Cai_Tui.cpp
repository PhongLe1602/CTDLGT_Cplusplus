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
    cin>>t;
    while(t--){
    	int n,m; cin >> n >> m;
    	int a[n+5],b[n+5];
    	for(int i = 1; i <= n; i++){
    		cin >> a[i];
		}
		for(int i = 1; i <= n; i++){
    		cin >> b[i];
		}
		ll dp[1005][1005]={0};
		ll ans = 0;
		for(int i = 1; i <= n;i++){
			for(int j = 1; j <= m; j++){
				dp[i][j] = dp[i-1][j];
				if(j >= a[i] && dp[i-1][j] < dp[i-1][j-a[i]] + b[i]){
					dp[i][j] = dp[i-1][j-a[i]] + b[i];
				}
				ans = max(ans,dp[i][j]);
			}
		}
		cout << ans<< endl;
    }
}
/*THE END*/
