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
    	int n; cin >> n;
    	int a[n+5];
    	f1(i,n) cin >> a[i];
    	int ok = 1;
    	f1(i,n){
    		if(a[i] !=i && a[i] != n - i + 1){
    			ok = 0; break;
			}
		}
		(ok)?(cout<<"Yes"):(cout<<"No");
		cout << endl; 
    }
}
/*THE END*/



