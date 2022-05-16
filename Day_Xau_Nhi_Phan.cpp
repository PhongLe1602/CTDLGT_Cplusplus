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

ll n,k;
ll a[100]={0};

int ql(ll n, ll k){
	if(n == 1) return 0;
	else if(n == 2) return 1;
	if(k <= a[n-2]) return ql(n-2,k);
	else return ql(n-1,k-a[n-2]);
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
	  a[0] = 0;
	  a[1] = 1;
	for(int i = 2; i <= 92; i++){
		a[i] = a[i-1] + a[i-2];
	}
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> k;
    	cout << ql(n,k)<< endl;
    }
}
/*THE END*/
