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
    	int n,m,k,ok = 0; cin >> n >> m >> k;
    	int a[n+5],b[m+5],c[k+5];
    	f0(i,n) cin >> a[i];
    	f0(i,m) cin >> b[i];
    	f0(i,k) cin >> c[i];
    	int j = 0,x = 0;
    	f0(i,n){
    		while(a[i] > b[j] && j < m) j++;
    		while(a[i] > c[x] && x < k) x++;
    		if(a[i] == b[j] && a[i] == c[x]){
    			j++; x++; ok = 1;
    			cout <<a[i]<<" ";
			}
		}
		if(!ok) cout << "NO";
		cout << endl;
    }
}
/*THE END*/



