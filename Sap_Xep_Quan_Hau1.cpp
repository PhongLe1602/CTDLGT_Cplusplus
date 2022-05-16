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
int n;
int nguoc[1005],xuoi[1005],a[1005],cnt ;
void ql(int i){
	for(int j = 1; j <= n; j++){
		if(a[j] && xuoi[i-j+n] && nguoc[i+j-1]){
			a[j] = xuoi[i-j+n] = nguoc[i+j-1] = 0;
			if(i==n) cnt++;
			else ql(i+1);
			a[j] = xuoi[i-j+n] = nguoc[i+j-1] = 1;
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
    	cnt = 0;
    	for(int i = 0; i < 100; i++){
    		a[i] = nguoc[i] = xuoi[i] = 1;
		}ql(1);
		cout << cnt << endl;
    }
}
/*THE END*/



