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
    	ll n,s; cin >> n >> s;
    	ll a[n+1];
    	f1(i,n) cin >> a[i];
    	bool used[n+1][s+5];
    	for(int i = 1; i <= s; i++) used[0][i] = false;
    	for(int i = 0; i <= n; i++) used[i][0] = true;
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= s; j++){
    			used[i][j] = used[i-1][j];
    			if(j >= a[i]){
    				if(used[i-1][j-a[i]]) used[i][j] = true;
				}
			}
		}
		if(used[n][s]) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
    }
}
/*THE END*/





