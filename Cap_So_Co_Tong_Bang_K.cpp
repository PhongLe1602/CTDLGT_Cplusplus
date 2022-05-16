// C++ implementation of simple method to find count of
// pairs with given sum.
#include <bits/stdc++.h>
using namespace std;

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
long long getPairsCount(long long arr[], long long n, long long sum)
{
	unordered_map<long long, long long> m;

	for (int i = 0; i < n; i++)
		m[arr[i]]++;

	long long twice_count = 0;

	for (int i = 0; i < n; i++) {
		twice_count += m[sum - arr[i]];

		if (sum - arr[i] == arr[i])
			twice_count--;
	}

	// return the half of twice_count
	return twice_count / 2;
}

// Driver function to test the above function
int main()
{
	int t; cin >> t;
	while(t--){
		long long n,k; cin >> n >> k;
		long long a[n];
		for(auto &i:a) cin >> i;
		cout << getPairsCount(a,n,k) << endl;
	}
	
	return 0;
}


