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
    	ll n; cin >> n;
    	ll a[n];
    	f0(i,n) cin >> a[i];
    	ll dp[n+1]={0},ans = INT_MIN;
    	for(int i = 0; i < n;i++){
    		dp[i] = 1;
    		for(int j = 0; j < i; j++){
    			if(a[i] >= a[j]) dp[i] = max(dp[i],dp[j] + 1);
			}
			ans = max(ans,dp[i]);
		}
		cout <<  n-ans << endl;
    }
}
/*THE END*/
