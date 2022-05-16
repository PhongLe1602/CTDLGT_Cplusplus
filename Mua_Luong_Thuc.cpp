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
    	ll n,m,s; cin >> n >> s >> m;
    	if(n < m || (6*n) - (6*m) < m) cout << -1;
    	else{
    		ll k = 0;
    		for(int i = 1; i <= 30; i++){
    			if((n*i)/m >= s){
    				k = i; break;
				}
			}
			cout << k;
		}
		cout << endl;
    }
}
/*THE END*/



