#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
main(){
	int t; cin >> t;
	while(t--){
		long long n,m = 0; cin >> n;
		long long a[n];
		for(auto &i:a) cin >> i;
		sort(a,a+n);
		for(int i = 0; i < n; i++){
			m +=((a[i]%mod) * (i % mod)) % mod;
			m%=mod;
		}
		cout << m << endl;
	}
}
