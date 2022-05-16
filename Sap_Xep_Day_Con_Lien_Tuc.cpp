#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		vector<long long>v;
		for(auto &i:a){
			cin >> i;
			v.push_back(i);
		}
		sort(v.begin(),v.end());
		int x = 0, y = n - 1;
		while(a[x] == v[x]) x++;
		while(a[y] == v[y]) y--;
		cout << x+1 <<" "<<y+1 << endl;
	}
}

