#include<bits/stdc++.h>
using namespace std;

int n,k,a[1005],b[1005],ok;

void next(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i) i--;
	if(i==0) ok = 0;
	a[i]++;
	for(int j = i+1; j<= k;j++){
		a[j]= a[i]+j-i;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		a[1005];b[1005];ok = 1;
		for(int i = 1; i <= k;i++){
			cin >> a[i]; b[i] = a[i];
		}
		ok = 1;
		next();
		if(ok){
			int dem = 0;
			for(int i = 1; i <= k;i++){
				int ok1 = 1;
				for(int j = 1; j <= k; j++){
					if(a[i] == b [j]){
						ok1 = 0; break;
					}
				}
				if(ok1) dem++;
			} 
			cout << dem;
		}else cout << k;
		cout << endl;
	}
}

