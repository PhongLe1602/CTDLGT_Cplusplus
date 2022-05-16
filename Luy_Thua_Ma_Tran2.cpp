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



void nhan(vll &a, vll b, ll n){
	ll c[n][n];
	f0(i,n){
		f0(j,n){
			c[i][j] = 0;
			f0(k,n){
				c[i][j] += (a[i][k]*b[k][j])%mod;
				c[i][j]%=mod;
			}
		}
	}
	f0(i,n){
		f0(j,n) a[i][j] = c[i][j];
	}
}

void power(vll a, ll n, ll k){
	vll res(n);
	f0(i,n){
		f0(j,n){
			if(i==j) res[i].pb(1);
			else res[i].pb(0);
		}
	}
	while(k){
		if(k%2==1){
			nhan(res,a,n);
		}
		nhan(a,a,n);
		k/=2;
	}
	ll sum = 0;
	f0(i,n){
		sum += res[i][n-1];
		sum %= mod;
	}
	cout << sum;
}


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	ll n,k;
    	cin >> n >> k;
    	vll a(n);
    	f0(i,n){
    		f0(j,n){
    			ll x; cin >> x; a[i].pb(x);
			}
		}
		power(a,n,k);
		cout << endl;
    }
}
/*THE END*/
