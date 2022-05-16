//#include<bits/stdc++.h>
//using namespace std;
//
//long long countRotations(long long arr[], long long n)
//{	
//	int low =0 , high = n-1;
//	while(low<=high){
//		int mid = low + (high-low)/2 ;
//		int prev = (mid-1 + n) %n , next = (mid+1)%n;
//		if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
//			return mid;
//		else if (arr[mid]<=arr[high])
//			high = mid-1 ;
//		else if (arr[mid]>=arr[low])
//			low=mid+1;
//	}
//	return 0;
//}
//
//main()
//{
//	int t;cin >> t;
//	while(t--){
//		long long n; cin >> n;
//		long long arr[n];
//		for(auto &i:arr) cin >> i;
//		cout << countRotations(arr,n-1)<< endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//int n,x; 
//bool cmp(int a, int b){
//	return abs(x-a) < abs(x-b);
//}
//main(){
//	int t; cin >> t;
//	while(t--){
//		cin >> n >> x;
//		vector<int>ve;
//		int a[n];
//		for(auto &i:a){
//			cin >> i;
//		}
//		stable_sort(a,a+n,cmp);
//		for(int i:a) cout << i <<" ";
//		cout << endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n,x;
//		cin>>n>>x;
//		vector<int>a(n);
//		long long dem=0;
//		for(auto &i:a)cin>>i;
//		stable_sort(a.begin(),a.end());
//		for(int i=0;i<n-1;i++){
//			int k=a[i]+x;
//			int c;
//			auto k2=lower_bound(a.begin(),a.end(),k)-a.begin();
//			c=k2-i-1;
//			if(c>=1) dem+=c;
//		}
//		cout<<dem<<endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int n; cin >> n;
//	int a[n];
//	for(auto &i:a) cin >> i;
//	for(int i = 0; i < n-1; i++){
//		for(int j = i + 1; j < n;j++){
//			if(a[i] > a[j]){
//				int tmp = a[i];
//				a[i] = a[j]; a[j] = tmp;
//			}
//		}
//		vector<int>v(a,a+n);
//		cout << "Buoc "<<i+1<<": ";
//		for(int x:v) cout << x<<" ";
//		cout << endl;
//	}
//}

/* sap_xep_Chen*/
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int n; cin >> n;
//	int a[n];
//	for(auto &i:a) cin >> i;
//	multiset<int>mu;
//	for(int i = 0; i < n; i++){
//		mu.insert(a[i]);
//		cout << "Buoc "<<i<<": ";
//		for(auto x:mu) cout << x <<" ";
//		cout << endl;
//	}
//}

/* Truc Tiep_Nguoc */
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		int a[n];
//		vector<vector<string>>ve;
//		for(auto &i:a) cin >> i;
//		for(int i = 0; i < n-1; i++){
//			for(int j = i + 1; j < n;j++){
//				if(a[i] > a[j]){
//					int tmp = a[i];
//					a[i] = a[j]; a[j] = tmp;
//				}
//			}
//			vector<string>v;
//			string k = "Buoc "+to_string(i+1)+":";
//			v.push_back(k);
//			for(int g:a){
//				v.push_back(to_string(g));
//			}
//			ve.push_back(v);
//		}
//		for(int i = ve.size()-1; i >=0; i--){
//			for(int j = 0; j < ve[i].size();j++){
//				cout << ve[i][j]<<" ";
//			}
//			cout << endl;
//		}
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int n; cin >> n;
//	int a[n];
//	for(auto &i:a) cin >> i;
//	vector<vector<string>>ve;
//	multiset<int>mu;
//	for(int i = 0; i < n; i++){
//		mu.insert(a[i]);
//		vector<string>v;
//		string k = "Buoc "+to_string(i)+":";
//		v.push_back(k);
//		for(auto x:mu){
//			v.push_back(to_string(x));
//		}
//		ve.push_back(v);
//	}
//	for(int i=ve.size()-1; i >= 0; i--){
//		for(int j = 0; j < ve[i].size(); j++) cout << ve[i][j] <<" ";
//		cout << endl;
//	}
//}

//sap xep chon
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int n; cin >> n;
//	int a[n];
//	for(auto &i:a) cin >> i;
//	vector<vector<string>>ve;
//	for(int i = 0; i < n-1; i++){
//		int minn = i;
//		for(int j = i + 1; j < n; j++){
//			if(a[j] < a[minn]) minn = j;
//		}
//		swap(a[i],a[minn]);
//		vector<string> v;
//		string k= "Buoc " + to_string(i+1)+":";
//		v.push_back(k);
//		for(int x:a){
//			v.push_back(to_string(x));
//		}
//		ve.push_back(v);
//	}
//	for(int i = ve.size()-1; i >= 0; i--){
//		for(int j = 0; j < ve[i].size(); j++) cout << ve[i][j]<<" ";
//		cout << endl;
//	}
//}
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;  t = 1;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(auto &i:a) cin >> i;
		for(int i = 0; i < n-1;i++){
			int x = 0;
			for(int j = 0; j < n-i-1; j++){
				if(a[j] > a[j+1]){
					swap(a[j],a[j+1]);
					x = 1;
				}
			}
			vector<int>v(a,a+n);
			if(x == 0) break;
			else{
				cout << "Buoc "<<i+1<<": ";
				for(int x:v) cout << x <<" ";
				cout << endl;
			}
		}
	}
}
