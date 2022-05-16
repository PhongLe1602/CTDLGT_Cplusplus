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

char c;
bool used[1005];
vi v;
int a[1005]; 

bool check(){
	for(int i = 1; i <= v.size()-1; i++){
		if(a[i] == 0 && (a[i-1]!=4 && a[i+1]!=4) 
			||(a[i]== 4&&(a[i-1]!=0&&a[i+1]!=0))) return false;
	}
	return true;
}
void ql(int i){
	for(int j = 0; j <= v.size(); j++){
		if(!used[j]){
			used[j] = true;
			a[i] = j;
			if(i == v.size() && check()){
				for(int g = 0; g <= v.size(); g++){
					cout << (char)(a[g]+65);
				}
				cout << endl;
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
    //cin>>t;
    while(t--){
    	cin >> c;
    	ms(used,false);
    	for(int i = 0; i < c-'A'; i++){
    		v.pb(i);
		}
		ql(0);
    }
}
/*THE END*/
