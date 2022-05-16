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
int a[1005];
int n;

bool check(){
	if(a[0] != 1 || a[n-1] != 0) return false;
	for(int i = 0; i < n-1;i++){
		int dem = 0;
		if(a[i]){
			dem = 1;
			int j;
			for(j = i+1; j < n;j++){
				if(a[j]) dem++;
				else break;
			}
			i = j-1;
		}
		if(dem > 1) return false;
	}
	for(int i = 0; i < n-3;i++){
		int dem = 0;
		if(!a[i]){
			dem = 1;
			int j;
			for(j = i+1; j < n;j++){
				if(!a[j]) dem++;
				else break;
			}
			i = j-1;
		}
		if(dem > 3) return false;
	}
	return true;
}

void sinh(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n-1){
			if(check()){
				for(int g = 0; g < n;g++){
					if(a[g]) cout<<8;
					else cout <<6; 
				}		
				cout <<"\n";			
			}
		}else sinh(i+1);
	}
}


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
   // cin>>t;
    while(t--){
    	a[1005]={};
    	cin >> n;
    	sinh(0);
    	
    }
}
/*THE END*/



