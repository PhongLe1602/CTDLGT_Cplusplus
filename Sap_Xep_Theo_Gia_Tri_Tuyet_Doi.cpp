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
#include<bits/stdc++.h>
using namespace std;
int n,x; 
bool cmp(int a, int b){
	return abs(x-a) < abs(x-b);
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		vector<int>ve;
		int a[n];
		for(auto &i:a){
			cin >> i;
		}
		stable_sort(a,a+n,cmp);
		for(int i:a) cout << i <<" ";
		cout << endl;
	}
}

