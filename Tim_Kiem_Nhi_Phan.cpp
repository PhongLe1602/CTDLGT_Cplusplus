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

int BinerySeach(int a[], int n, int x){
	int l = 0, r = n-1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x) return mid;
		else if(a[mid] > x ) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	int n , x; 
    	cin >> n >> x ;
    	int a[n];
    	for(auto &i:a) cin >> i;
    	int ok = BinerySeach(a,n,x);
    	if(ok == -1) cout << "NO";
    	else cout << ok + 1;
		cout << endl; 
    }
}
/*THE END*/



