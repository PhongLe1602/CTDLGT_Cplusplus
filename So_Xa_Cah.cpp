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

bool used[1005];
int n;
int a[1005];
vi v;
multiset<string>mu;
int ok = 0;
bool check(){
	for(int i = 2; i<= n;i++){
		if(abs(a[i]-a[i-1]) == 1) return false;
	}
	return true;
}

void ql(int i){
	for(int j = 1; j <= n;j++){
		if(!used[j]){
			used[j] = true;
			a[i] = j;
			if(i == n && check()){
				ok = 1;
				string x="";
				for(int g=1; g <= n;g++) x+=to_string(a[g]);
				mu.insert(x);
			}else ql(i+1);
			used[j] = false;
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
    	cin >> n;
    	a[1005];
    	ms(used,false);
    	mu.clear();
    	v.clear();
    	ok = 0;
    	f1(i,n) v.pb(i);
    	ql(1);
    	if(!ok) cout << endl;
    	else{
    		for(string g:mu) cout << g << endl;
		}
    	
    }
}
/*THE END*/



