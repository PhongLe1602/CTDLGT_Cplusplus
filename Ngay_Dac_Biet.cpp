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

bool ktr(string x1, string x2){
	if(x1 == x2) return true;
	return false;
}

/**/
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	multiset<string>m;
    	vector<string> v; v.pb("02");v.pb("20"); v.pb("22");
    	for(int i = 2000; i <= 10000; i++){
    		int ok = 1;
    		string x = to_string(i);
    		for(char c:x){
    			if(c != '0' && c != '2'){
    				ok = 0; break;
				}
			}
			if(ok){
				string k = "02";
				for(auto g:v){
					string z = "";
					z = g + k + x;
					m.insert(g +"/"+k+"/"+x);
				}
			}
		}
		
		for(string k:m) cout << k << endl;
    }
}
/*THE END*/
