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
#define ms(n,s) memset(s,n,size(s)
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

/**/
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	ll n,s,sum = 0,sum2 = 0;
    	cin >> n >> s;
    	ll a[n],b[n];
    	f0(i,n){
    		cin >> a[i]; sum += a[i];
		}
		sort(a,a+n);
		int x = max(s,n-s);
		for(int i = n-1; i >= 0; i--){
			if(x == 0) break;
			sum2 += a[i];
			x--;
		}
		cout << (sum2) - (sum - sum2) << endl;
    	
    }
}
/*THE END*/
