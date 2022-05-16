////#include<bits/stdc++.h>
////using namespace std;
////main(){
////	int t; cin >> t;
////	while(t--){
////		int n; cin >> n; 
////		int a[n];
////		for(auto &i:a) cin >> i;
////		sort(a,a+n);
////		int l1 = 0,l2 = n-1;
////		for(int i = 0; i < n; i++){
////			if(i%2==0){
////				cout << a[l2] <<" ";l2--;
////			}else{
////				cout << a[l1] <<" "; l1++;
////			}
////		}
////		cout << endl;
////	}
////}
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		int a[n], b[100005]={0};
//		for(auto &i:a){
//			cin >> i;
//			b[i] = 1;
//		}
//		sort(a,a+n);
//		int dem = 0;
//		for(int i = a[0]; i < a[n-1]; i++){
//			if(b[i] == 0) dem++;
//		}
//		cout << dem << endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//bool nto(int n){
//	if(n < 2) return false;
//	if(n > 2){
//		if(n%2==0) return false;
//	}
//	if(n == 2) return true;
//	for(int i = 3; i <= sqrt(n);i+=2){
//		if(n%i==0) return false;
//	}
//	return true;
//}
//main(){
//	int t; cin >> t;
//	int a[100005]={0};
//	a[0] = a[1] = 1;
//	for(int i = 2; i <= sqrt(100005);i++){
//		if(a[i] == 0){
//			for(int j = i*i; j <= 100005; j+=i){
//				a[j] = 1;
//			}
//		}
//	}
//	while(t--){
//		int n; cin >> n;
//		int ok = 0;
//		for(int i = 2; i <= n/2; i++){
//			if(a[i] == 0 && a[n-i] == 0){
//				cout << i << " "<<n-i;
//				ok = 1;
//				break;
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
		long long n; cin >> n;
		long long a[n];
		long long min2 = INT_MAX;
		for(auto &i:a){
			cin >> i; 
		}
		sort(a,a+n);
		for(int i = 1; i < n; i++){
			if(a[i]!=a[0]){
				min2 = a[i]; break;
			}
		}
		if(min2 == INT_MAX) cout << -1;
		else cout << a[0] << " "<<min2;
		cout << endl;
	}
}

