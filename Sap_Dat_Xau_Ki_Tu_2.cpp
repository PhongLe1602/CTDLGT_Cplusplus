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
    int t; cin >> t;
	while(t--){
		int d;
		string s; cin >>d >> s;
		map<char,long long>mpp;
		vector<ll>v;
		for(int i = 0; i < s.size();i++){
			mpp[s[i]]++;
		}
		for(auto it:mpp){
			v.pb(it.se);
		}
		int ok = 1;
		sort(v.begin(),v.end(),greater<ll>());
		for(int i = 0; i < v.size(); i++){
			int ts = v[i];
			for(int k = 0; k < ts; k++){
				if(i + k*d >= s.size()){
					ok = 0; break;
				}
			}
			if(!ok) break;
		}
		if(ok) cout <<1;
		else cout <<-1;
		cout << endl;
	}
}

