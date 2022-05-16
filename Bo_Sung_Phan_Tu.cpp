//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n; 
//		int a[n];
//		for(auto &i:a) cin >> i;
//		sort(a,a+n);
//		int l1 = 0,l2 = n-1;
//		for(int i = 0; i < n; i++){
//			if(i%2==0){
//				cout << a[l2] <<" ";l2--;
//			}else{
//				cout << a[l1] <<" "; l1++;
//			}
//		}
//		cout << endl;
//	}
//}
#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[100005]={0};
		for(auto &i:a){
			cin >> i;
			b[i] = 1;
		}
		sort(a,a+n);
		int dem = 0;
		for(int i = a[0]; i < a[n-1]; i++){
			if(b[i] == 0) dem++;
		}
		cout << dem << endl;
	}
}

