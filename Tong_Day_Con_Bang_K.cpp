#include<bits/stdc++.h>
using namespace std;
int n,k; 
int a[100005],b[100005],dem = 0;
long sum(int b[]){
	long g = 0;
	for(int i = 0; i < n; i++){
		if(b[i] == 1) g+=a[i];
	}
	return g;
}
void ql(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n - 1){
			if(sum(b) == k){
				dem++;
				for(int i = 0; i < n; i++){
					if(b[i] == 1) cout << a[i]<<" ";
				}
				cout << endl;
			}
		}else ql(i+1);
	}
}
main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	ql(0);
	cout << dem;
}

