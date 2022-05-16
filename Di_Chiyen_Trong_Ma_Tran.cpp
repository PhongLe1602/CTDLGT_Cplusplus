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


pi pa[2] ={{1,0},{0,1}};
int dem = 0;
int a[105][105];
bool used[105][105];
int n,m;

void ql(int i, int j){
	if(i == n-1 && j == m-1){
		dem++; return;
	}
	for(int k = 0; k < 2; k++){
		int x = i + pa[k].fi;
		int y = j + pa[k].se;
		if(x >= 0 && x < n && y >= 0 && y < m && !used[x][y]){
			used[x][y] = true;
			ql(x,y);
			used[x][y] = false;
		}
	}
}


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	dem = 0;
    	a[105][105]={};
    	cin >> n >> m;
    	f0(i,n){
    		f0(j,m) cin >> a[i][j];
		}
		ms(used,false);n
		ql(0,0);
		cout << dem << endl;
    }
}
/*THE END*/



