#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int sum = 0;
		bool used[100006];
		int a[n];
		memset(used,false,sizeof(used));
		for(auto &i:a){
			cin >> i; sum += i;
		}
		if(sum%2!=0){
			cout <<"NO";
		}else{
			for(int i = 0; i < n; i++){
				for(int j = sum/2; j >= a[i]; j--){
					if(j == a[i]||used[j - a[i]]){
						used[j] = true;
					}
				}
			}
			if(used[sum/2]) cout << "YES";
		}
		cout << endl;
	}
}

