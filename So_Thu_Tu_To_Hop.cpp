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

int n,k;
int a[1005],b[1005],ok;

void next(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i) i--;
	if(i == 0) ok = 0;
	a[i]++;
	for(int j = i+1; j <= k ;j++) a[j] = a[i] + j - i; 
}



main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	a[1005] = {0};
    	b[1005] ={0};
    	cin >> n >> k;
    	for(int i = 1; i <= k;i++){
    		a[i] = i; cin >> b[i];
		}
		int k1 = 1;
		ok = 1;
		while(ok){
			int ok1 = 1;
			for(int i = 1; i <= k;i++){
				if(a[i] != b[i]){
					ok1 = 0; break;
				}
				//cout << a[i]<<" ";
			}
			if(ok1){
				cout << k1;
				break;
			}else{
				k1++;
			}
			next();
		}
		cout << endl;
    }
}
/*THE END*/



