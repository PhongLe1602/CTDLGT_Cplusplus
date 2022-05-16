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
#define ms(n,s) memset(s,n,size(s)
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
int n, a[10005]={};
void sinh(int j){
	for(int i = 0; i <= 1; i++){
		a[j] = i;
		if(j == n - 1){
			string x1="",x2;
			for(int g = 0; g < n; g++){
				x1 +=to_string(a[g]);
				x1 += " ";
			//	cout << a[g]<<" ";
			}
			x1.erase(x1.size() - 1);
			x2 = x1; reverse(x1.begin(),x1.end());
			if(x1 == x2) cout << x1 << endl;
			
		}else sinh(j+1);
	}
}
/**/
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	cin >> n;
    	sinh(0);
    }
}
/*THE END*/




