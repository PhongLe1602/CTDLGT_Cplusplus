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
int a[1005];
int n;
vector<string>v;
string s;
void hv(int i){
	for(int j = 1; j <= s.size(); j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == s.size()){
				string x = "";
				for(int g = 1; g <= s.size();g++){
					cout << s[a[g]-1];
				}
				cout <<" ";
			}else hv(i+1);
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
    	a[1005];
    	cin >> s;
    	ms(used,false);
    	hv(1);
    	cout << endl;
    }
}
/*THE END*/



