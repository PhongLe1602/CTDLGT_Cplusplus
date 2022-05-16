#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<char>v;
int a[100005];
void ql(int i){
	for(int j = a[i-1] + 1; j <= v.size()- k + i; j++){
		a[i] = j;
		if(i == k){
			for(int g = 1; g <= k; g++){
				cout << v[a[g]-1];
 			}
 			cout << endl;
		}else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		v.clear();
		a[100005]={0};
		for(int i = 0; i < n; i++){
			v.push_back((char)(i+'A'));
			//cout <<(char) (i + 'A') <<" ";
		}
		ql(1);
	}
}

