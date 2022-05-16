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
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t;cin >> t;
//	while(t--){
//		long long n; cin >> n;
//		long long a[n];
//		long long min2 = INT_MAX;
//		for(auto &i:a){
//			cin >> i; 
//		}
//		sort(a,a+n);
//		for(int i = 1; i < n; i++){
//			if(a[i]!=a[0]){
//				min2 = a[i]; break;
//			}
//		}
//		if(min2 == INT_MAX) cout << -1;
//		else cout << a[0] << " "<<min2;
//		cout << endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t;cin >> t;
//	while(t--){
//		long n,m; cin >> n >> m;
//		long a[n],b[m];
//		for(auto &i:a) cin >> i;
//		for(auto &i:b) cin >> i;
//		sort(a,a+n);sort(b,b+m);
//		cout << 1LL * a[n-1] * b[0] << endl; 
//	
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t;cin >> t;
//	while(t--){
//		long long n,x; cin >> n >> x;
//		long long a[n];
//		int ok = 0;
//		for(auto &i:a){
//			cin >> i;
//			if(i == x) ok = 1;
//		}
//		if(ok) cout << 1;
//		else cout << -1;
//		cout << endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//#define run() int t;cin>>t;while(t--)
//main(){
//     run(){
//          int n;
//          cin>>n;
//          int a[n];
//          for(int i=0;i<n;i++) cin>>a[i];
//          int max1=0,ok = 0;
//          for(int i=0;i<=sqrt(n)/2;i++){
//               int j=n-1;
//               int k=0;
//               while(a[i]>a[j]&&j>i) j--;
//               if(a[i]<a[j]){
//               		ok = 1;
//                    k=j-i;
//                    max1=max(k,max1);
//               }
//          }
//          if(ok == 0) cout << - 1;
//          else cout << max1;
//          cout << endl;
//     }
//}
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		long long n,k; 
//		cin >> n;
//		long long a[n];
//		for(auto &i:a){
//			cin >> i;
//		}
//		stable_sort(a,a+n);
//		long long Min = INT_MAX;
//		for(int i = 1; i < n;i++){
//			Min = min(Min,a[i] - a[i-1]);
//		}
//		cout  << Min << endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//long long luy(long long a, long long b){
//	if(b == 0) return 1;
//	long long x = luy(a,b/2);
//	if(b%2==0) return x * x;
//	else return a * x * x;
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		long n; cin >> n;
//		long long a[n];
//		for(auto &i : a) cin >> i;
//		sort(a,a+n,greater<int>());
//		int ok = 0;
//		for(int i = 0; i < n - 2; i++){
//			long long x1 =luy(a[i],2); 
//			for(int j = i + 1; j < n - 1; j++){
//				long long x2 = luy(a[j],2);
//				long long x4 = x1 - x2;
//				if((long long)sqrt(x4) == sqrt(x4)){
//					for(int k = j + 1; k < n; k++){
//						if((long long)sqrt(x4) == a[k]){
//							ok = 1; break;
//						}
//					}
//				}
//				if(ok == 1) break;
//			}
//			if(ok == 1) break;
//		}
//		if(ok) cout << "YES\n";
//		else cout <<"NO\n";
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//
//main(){
//	int t; cin >> t;
//	while(t--){
//		long long n; cin >> n;
//		long long a[n];
//		long long ok = 0,g;
//		map<long long,long long>mp;
//		for(auto &i:a){
//			cin >> i;mp[i]++;
//		}
//		for(auto i:a){
//			if(mp[i] > 1 && ok == 0){
//				g = i; ok = 1;
//				break;
//			}
//		}
//		if(ok) cout << g;
//		else cout <<"NO";
//		cout << endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//     int t;
//     cin>>t;
//     while(t--){
//          int n;
//          cin>>n;
//          int a[n],ll=0;
//          for(int i=0;i<n;i++){
//               cin>>a[i];
//               ll+=a[i];
//          }
//          ll-=a[0];
//          int m=0,v=0;
//          for(int i=1;i<n;i++){
//               m+=a[i-1];
//               ll-=a[i];
//               if(ll==m){
//                    cout<<i+1<<endl;
//                    v=1;
//                    break;
//               }
//          }
//          if(v==0) cout<<"-1"<<endl;
//     }
//}
#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
bool cmp(int a,int b){
	if(mp[b] < mp[a]) return true;
	else if(mp[b] == mp[a] && b > a) return true;
	return false;  
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		mp.clear();
		for(auto &i:a){
			cin >> i; mp[i]++;
		}
		sort(a,a+n,cmp);
		for(auto i:a) cout << i <<" ";
		cout << endl;
	}
}

