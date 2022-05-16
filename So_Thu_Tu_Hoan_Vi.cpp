#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005];
int n,ok;
void next(){
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1])i--;
	if(i== 0) ok = 0;
	int j = n;
	while(a[i] > a[j]) j--;
	swap(a[i],a[j]);
	sort(a + i + 1, a + n + 1);
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		for(int i = 1; i <= n;i++){
			a[i] = i;
			cin >> b[i];
		}
		int k = 1;
		while(ok){
			int ok1 = 1;
			for(int i = 1; i <= n;i++){
				if(a[i] != b[i]){
					ok1 = 0; break;
				}
			}
			if(ok1){
				cout << k;
				break;
			}else{
				k++;
			}
			next();
		}
		cout << endl;
	}
}

