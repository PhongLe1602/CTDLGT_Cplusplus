#include<bits/stdc++.h>
using namespace std;
int n, b[100005];
int check(){
	if(b[0] != 1 || b[n-1]!=0) return 0;
	else{
		for(int i = 1; i < n; i++){
			if(b[i] == b[i-1] && b[i] == 1) return 0;
		}
		return 1;
	}
}

void ql(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n-1){
			if(check()){
				for(int i = 0; i < n;i++){
					if(b[i] == 1) cout <<'H';
					else cout <<'A';
				}
				cout << endl;
			}
		}else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		b[100005]={};
		cin >> n;
		ql(0);
		//cout << endl;
	}
}

