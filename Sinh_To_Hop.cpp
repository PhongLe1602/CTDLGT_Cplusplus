#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}

int n,k,a[100],ok;

void init(){
	FOR(i,1,k+1){
		a[i]=i;
	}
}
void next(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0) ok=false;
	a[i]++;
	for(int j=i+1;j<=k;j++){
		a[j]=a[i]+j-i;
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		init();
		ok=true;
		while(ok){
			FOR(i,1,k+1){
				cout<<a[i];
			}
			cout<<' ';
			next();
		}
		cout<<"\n";
	}
}
