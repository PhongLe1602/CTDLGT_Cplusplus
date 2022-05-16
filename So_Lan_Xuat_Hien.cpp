//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t;cin >> t;
//	while(t--){
//		int n; cin >> n;
//		int a[n];
//		for(auto &i:a) cin >> i;
//		sort(a,a+n);
//		for(int x:a) cout << x <<" ";
//		cout << endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//void inPut(long long a[],int n){
//	for(int i = 0; i < n; i++){
//		cin >> a[i];
//	}
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		long long n,m,h;
//		cin >> n >> m >> h;
//		long long a[n]={},b[m]={},c[h]={};
//		inPut(a,n);inPut(b,m);inPut(c,h);
//		int ok = 1, j = 0, k = 0;
//		for(int i = 0; i < n; i++){
//			while(a[i] > b[j] && j < m) j++;
//			while(a[i] > c[k] && k < h) k++;
//			if(a[i] == b[j] && a[i] == c[k]){
//				ok = 1;
//				k++;j++;
//				cout << a[i] <<" ";
//			}
//		}
//		if(ok == 0) cout << -1;
//		cout << endl;
//	}
//}
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		map<int,int>mp;
		for(int i = 0; i < n; i++){
			int x; cin >> x; mp[x]++;
		}
		if(mp[k] != 0) cout << mp[k] << endl;
		else cout << - 1 << endl;
	}
}

