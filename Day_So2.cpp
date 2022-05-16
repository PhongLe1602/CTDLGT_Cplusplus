#include<bits/stdc++.h>
using namespace std;
vector<string>v3;
void ql(vector<int>v){
	string x ="[";
	for(int i = 0; i < v.size(); i++){
		if(i!=v.size()-1){
			x += to_string(v[i]);
			x += " ";
		}else x += to_string(v[i]);
	}
	x +="]"; v3.push_back(x);
	if(v.size() > 1){
		vector<int>v1;
		for(int i = 0; i < v.size()-1; i++){
			v1.push_back(v[i]+v[i+1]);
		}
		ql(v1);
	}else return;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int>v2;
		for(int i = 0; i < n;i++){
			int x; cin >> x; v2.push_back(x);
		}
		v3.clear();
		ql(v2);
		reverse(v3.begin(),v3.end());
		for(string x:v3) cout << x <<" ";
		cout << endl;
	}
}

