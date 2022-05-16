#include<bits/stdc++.h>
using namespace std;
int a[50]={0},n,k,b[50]={0};
string kq[1000000];
int dem=0;
string taoxau(int n){
	string x="";
	while(n>0){
		x=(char)(n%10+48)+x;
		n/=10;
	}
	return x;
}
void in(){
	for(int i=1;i<=k;i++){
		string x=taoxau(b[a[i]-1]);
		kq[dem]+=x+" ";
	}
	dem++;
}
int kt(){
	for(int i=1;i<k;i++){
		if(b[a[i]-1]>b[a[i+1]-1])return 0;
	}
	return 1;
}
void quaylui(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			if(kt()==1){
				in();
			}
		}
		else quaylui(i+1);
	}
}
main (){
		cin>>n;
		for(int i=0;i<n;i++)cin>>b[i];
		for(k=2;k<=n;k++){
			quaylui(1);
		}
		sort(kq,kq+dem);
		for(int i=0;i<dem;i++)cout<<kq[i]<<endl;		
}

