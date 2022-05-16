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


ll n,k;

ll power(ll a, ll b){
	ll res = 1;
	while(b){
		if(b%2==1){
			res *= a;
		}
		a*=a;
		b/=2;
	}
	return res;
}

ll Find(ll n, ll k){
	ll x = power(2,n-1);
	if(k == x) return n;
	else if(k < x) return Find(n-1,k);
	else if(k > x) return Find(n-1,k-x);
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> k;
    	cout << (char)((Find(n,k)-1) + 'A') << endl;
    }
}
/*THE END*/



