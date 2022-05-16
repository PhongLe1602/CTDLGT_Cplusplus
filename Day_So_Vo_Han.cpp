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
typedef vector<vector<ll>>vll;

const ll oo=1e13;
const int mod=1e9+7;
const int N=1e6+5;


void nhan(vll &a,vll b,ll n){
	ll c[n][n];
	f0(i,n){
		f0(j,n){
			c[i][j] = 0;
			f0(k,n){
				c[i][j] += (a[i][k] * b[k][j])%mod;
				c[i][j] %= mod;
			}
		}
	}
	f0(j,n){
		f0(i,n) a[i][j] = c[i][j];
	}
}


void lt(vll a, ll b,ll n){
	vll res(n);
	ll sum = 0;
	f0(i,n){
		f0(j,n){
			if(i == j) res[i].pb(1);
			else res[i].pb(0);
		}
	}
	while(b){
		if(b%2==1){
			nhan(res,a,n);
		}
		nhan(a,a,n);
		b/=2;
	}
	
	cout << res[0][1];
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=20;
    cin>>t;
    while(t--){
    	ll n,k,sum = 0;
    	cin >> k;
    	n = 2;
    	vll a(n);
    	a[0].pb(1);a[0].pb(1);a[1].pb(1);a[1].pb(0);
		lt(a,k,n);
		cout << endl;
    }
}
/*THE END*/



