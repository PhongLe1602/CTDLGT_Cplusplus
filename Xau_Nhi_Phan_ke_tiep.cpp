#include<bits/stdc++.h>
using namespace std;
string x;
main(){
	int t;cin >> t;
	while(t--){
		string s; cin >> s;
		int i = s.size()-1;
		while(i >= 0 && s[i] == '1'){
			s[i] ='0';
			i--;
		}
		if(i==-1){
			for(int i = 0; i < s.size();i++) cout<< 0;
		}
		else{
			s[i]='1';
			for(int i = 0; i < s.size();i++) cout <<s[i];
		}
		cout << endl;
	}
}

