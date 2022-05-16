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
char a = 'A',b = 'B',c = 'C';
int n;
void chuyen(int n, char a, char b){
	cout << a <<" -> " << b;
	cout << endl;
}

void ql(int n, char a, char b, char c){
	if(n==1) chuyen(1,a,c);
	else{
		ql(n-1,a,c,b);
		chuyen(n,a,c);
		ql(n-1,b,a,c);
	}
}



main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
   // cin>>t;
    while(t--){
    	cin >> n;
    	ql(n,a,b,c);
    }
}
/*THE END*/



