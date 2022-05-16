#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(auto &i:a) cin >> i;
		sort(a,a+n);
		for(int x:a) cout << x <<" ";
		cout << endl;
	}
}

