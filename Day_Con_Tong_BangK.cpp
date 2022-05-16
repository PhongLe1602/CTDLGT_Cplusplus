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
#define ms(n,s) memset(s,n,sizeof(s))
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
int a[105];
vi v;
int ok;
bool used[1005];
void ql(int id, int vt, int sum){
	if(sum == k){
		cout <<"[";
		for(int g = 0; g < id; g++){
			if(g!=id-1) cout << a[g]<<" ";
			else cout << a[g];
		}
		cout << "] ";ok = 1; return ;
	}
	for(int i = vt; i < v.size(); i++){
		if(!used[i] && sum + v[i] <= k){
			used[i] = true;
			a[id] = v[i];
			ql(id+1,i+1,sum + v[i]);
			used[i] = false;
		}
	}
}
/**/
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> k;
    	v.clear();
    	f0(i,n){
    		int x; cin >> x; v.pb(x);
		}
		ok = 0;
		memset(used,false,sizeof(used));
		sort(v.begin(),v.end());
		ql(0,0,0);
		if(!ok) cout << -1;
		cout << endl;
    }
}
/*THE END*/



