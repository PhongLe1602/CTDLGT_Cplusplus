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

ll power(ll a, ll b){
	if(b == 0) return 1;
	ll x = power(a,b/2);
	x = (x*x)%mod;
	if(b%2 == 0) return (x);
	return (a*x)%mod;
}

int vt(vi a,int l, int r, int k){
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == k) return mid;
		else if(a[mid] < k) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	int n,m,k; cin >> n >> m >> k;
    	int a[n],b[m];
    	vi v;
    	f0(i,n) cin >> a[i];
    	f0(i,m) cin >> b[i];
    	int i = 0, j = 0;
    	while(i < n && j < m){
    		if(a[i] <= b[j]){
    			v.pb(a[i]);
    			i++;
			}else if(a[i] > b[j]){
				v.pb(b[j]); j++;
			}
		}
		while(i < n) v.pb(a[i++]);
		while(j < m) v.pb(b[j++]);
		cout <<v[k-1]<<endl;
    }
}
/*THE END*/



