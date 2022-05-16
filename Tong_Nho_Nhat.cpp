#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a[n];
		for(auto &i:a) cin >> i;
		sort(a,a+n);
		// 2 3 4 5 6 8
		// 0 3 4 5 7
		string x1 ="",x2 ="";
		for(int i = 0; i < n;i++){
			if(i%2==0) x1 += to_string(a[i]);
			else x2 += to_string(a[i]);
		}
		cout <<stoll(x1) + stoll(x2) << endl;
	}
}
