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
int n,m,ok;
int a[15][15];
bool used[105][105];
pi path[2]={{1,0},{0,1}};
void ql(int i, int j,string s){
	if(a[0][0] != 1 || a[n-1][n-1]!=1){
		ok = 0;
		return;
	}
	if(i == n-1 && j == n -1){
		ok = 1;
		cout << s <<" "; return;
	}
	for(int k = 0; k < 2; k++){
		int x = i + path[k].fi;
		int y = j + path[k].se;
		if(x >= 0 && x < n && y >= 0 && y < n && a[x][y] == 1 && !used[x][y]){
			used[x][y] = true;
			if(k == 0){
				ql(x,y,s+"D");
			}else ql(x,y,s+"R");
			used[x][y] = false;
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
    	cin >> n;
    	a[15][15]={};
    	ok = 0;
    	memset(used,false,sizeof(used));
    	f0(i,n){
    		f0(j,n) cin >> a[i][j];
		}
		ql(0,0,"");
		if(!ok) cout << -1;
		cout << endl;
    }
}
/*THE END*/



