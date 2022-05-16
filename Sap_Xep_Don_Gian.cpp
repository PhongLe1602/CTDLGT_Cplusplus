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


bool cmp(pi a, pi b){
	if(a.fi != b.fi){
		if(a.fi < b.fi) return true;
		return false;
	}
	return a.se < b.se;
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t = 1; 
	//cin >> t;
	while(t--){
		int n; cin >> n;
		pi pa[n];
		for(int i = 0; i < n; i++){
			cin >> pa[i].fi; pa[i].se = i;
		}
		sort(pa,pa+n,cmp);
		int cnt = 1;
		int d = 0;
		for(int i = 1;i < n; i++){
			if(pa[i].se > pa[i-1].se){
				cnt++;
			}else{
				d = max(cnt,d); cnt = 1;
			}
		}
		d = max(d,cnt);
		cout << n - d;
	}
}
/*THE END*/



