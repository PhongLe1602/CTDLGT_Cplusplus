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
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t;cin >> t;
//	while(t--){
//		int n,k; cin >> n >> k;
//		map<int,int>mp;
//		for(int i = 0; i < n; i++){
//			int x; cin >> x; mp[x]++;
//		}
//		if(mp[k] != 0) cout << mp[k] << endl;
//		else cout << - 1 << endl;
//	}
//}
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		int n,k; cin >> n >> k;
//		int a[n];
//		for(auto &i:a) cin >> i;
//		sort(a,a+n);
//		for(int i = n-1; i >= 0; i--){
//			if(k == 0) break;
//			cout << a[i] << " ";
//			k--;
//		}
//		cout << endl;
//	}
//}
//Bai 8: tim so cac cap pow(x,y)>pow(y,x)
//#include<bits/stdc++.h> 
//typedef long long int ll;
//using namespace std;   
//  
//// Function to return count of pairs with x as one element 
//// of the pair. It mainly looks for all values in Y[] where 
//// x ^ Y[i] > Y[i] ^ x 
//ll count(ll x, ll Y[], ll n, ll NoOfY[]) 
//{ 
//    // If x is 0, then there cannot be any value in Y such that 
//    // x^Y[i] > Y[i]^x 
//    if (x == 0) return 0; 
//  
//    // If x is 1, then the number of pais is equal to number of 
//    // zeroes in Y[] 
//    if (x == 1) return NoOfY[0]; 
//  
//    // Find number of elements in Y[] with values greater than x 
//    // upper_bound() gets address of first greater element in Y[0..n-1] 
//    ll* idx = upper_bound(Y, Y + n, x); 
//    ll ans = (Y + n) - idx; 
//  
//    // If we have reached here, then x must be greater than 1, 
//    // increase number of pairs for y=0 and y=1 
//    ans += (NoOfY[0] + NoOfY[1]); 
//  
//    // Decrease number of pairs for x=2 and (y=4 or y=3) 
//    if (x == 2)  ans -= (NoOfY[3] + NoOfY[4]); 
//  
//    // Increase number of pairs for x=3 and y=2 
//    if (x == 3)  ans += NoOfY[2]; 
//  
//    return ans; 
//} 
//  
//// Function to return count of pairs (x, y) such that 
//// x belongs to X[], y belongs to Y[] and x^y > y^x 
//ll countPairs(ll X[], ll Y[], ll m, ll n) 
//{ 
//    // To store counts of 0, 1, 2, 3 and 4 in array Y 
//    ll NoOfY[5] = {0}; 
//    for (ll i = 0; i < n; i++) 
//        if (Y[i] < 5) 
//            NoOfY[Y[i]]++; 
//  
//    // Sort Y[] so that we can do binary search in it 
//    sort(Y, Y + n); 
//  
//    int total_pairs = 0; // Initialize result 
//  
//    // Take every element of X and count pairs with it 
//    for (ll i=0; i<m; i++) 
//        total_pairs += count(X[i], Y, n, NoOfY); 
//  
//    return total_pairs; 
//} 
//  
//// Driver program  
//int main() { 
//	ll *A, *B, m, n, T; cin>>T;
//	while(T--){
//		cin>>m>>n; A = new ll[m]; B = new ll[n];
//		for(ll i=0; i<m; i++) cin>>A[i];
//		for(ll i=0; i<n; i++) cin>>B[i];
//		cout<<countPairs(A, B, m, n)<<endl;
//	}
//}
//
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef double db;
//#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define tester() int t; cin >> t; while(t--)
//#define PI atan(1)*4
//#define in INT_MAX
//#define im INT_MIN
//#define fi first
//#define se second
//#define vi vector <int>
//#define vll vector <ll>
//#define pii pair <int, int>
//#define mp(x, y) make_pair(x, y)
//const int Mod = 1e9 + 7;
//const int nMax = 1e5 + 1;
//main(){
//     faster();
//     tester(){
//          int n,m,j=0;
//          cin>>n>>m;
//          int a[n],b[m],c[100005]={0};
//          for(int i=0;i<n;i++){
//               cin>>a[i];
//               c[a[i]]++;
//          }
//          for(int i=0;i<m;i++){
//               cin>>b[i];
//               c[b[i]]++;
//               
//          }
//          for(int i=0;i<=100000;i++){
//               if(c[i]!=0) cout<<i<<" ";
//          }
//          cout<<endl;
//          sort(a,a+n);sort(b,b+m);
//          for(int i=0;i<n;i++){
//               while(a[i]>b[j]&&j<m) j++;
//               if(a[i]==b[j]){
//                    j++;
//                    cout<<a[i]<<" ";
//               }
//          }
//          cout<<endl;
//     }
//}
//#include<bits/stdc++.h>
//using namespace std;
//main(){
//	int t; cin >> t;
//	while(t--){
//		long long n,m;
//		cin >> n >> m;
//		long long a[n],b[m],c[n+m];
//		long long l1  = 0;
//		for(auto &i:a){
//			cin >> i; c[l1++] = i;
//		}
//		for(auto &i:b){
//			cin >> i;
//			c[l1++] = i;
//		}
//		sort(c,c+l1);
//		for(int x:c) cout << x <<" ";
//	
//		cout << endl;
//	} 
//}
//#include<bits/stdc++.h>
//using namespace std;
//#define run()  int t;cin>>t;while(t--)
//main(){
//     run(){
//          int n;
//          cin>>n;
//          int a[n];
//          for(int i=0;i<n;i++)cin>>a[i];
//          //sort(a,a+n);
//          int min=-999999;
//          for(int i=0;i<n-1;i++){
//               for(int j=i+1;j<n;j++){
//                    if(abs(min)>abs(a[i]+a[j])){
//                         min=a[i]+a[j];
//                    }
//               }
//          }
//          cout<<min<<endl;
//     }
//}
#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<char>se;
		while(n--){
			string s; cin >> s;
			for(int i = 0; i < s.size();i++){
				se.insert(s[i]);
			}
		}
		for(auto i:se) cout <<  i <<" ";
		cout << endl;
	}
}

