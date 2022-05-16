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
    //cin>>t;
    while(t--){
    	string n,m; cin >> n >> m;
    	f0(i,n.size()){
    		if(n[i] =='6') n[i] = '5';
		}
    	f0(i,m.size()){
    		if(m[i] =='6') m[i] = '5';
		}
		cout << stoll(n) + stoll(m) <<" ";
		f0(i,n.size()){
    		if(n[i] =='5') n[i] = '6';
		}
    	f0(i,m.size()){
    		if(m[i] =='5') m[i] = '6';
		}
		cout << stoll(n) + stoll(m) <<" ";
    }
}
/*THE END*/



