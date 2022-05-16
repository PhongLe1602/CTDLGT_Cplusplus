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


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	string s; cin >> s;
    	string x = s;
    	reverse(s.begin(),s.end());
    	cout << power(stoll(x),stoll(s)) << endl;;
    }
}
/*THE END*/
