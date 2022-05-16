#include<bits/stdc++.h>
using namespace std;
int n,ok,a[10005];
void init(){
    for(int i=1;i<=n;i++) cin >> a[i];
}
void next(){
    int i=n-1;
    while(i>=1&&a[i]>a[i+1]) i--;
    if(i==0) ok = 0;
    int j=n;
    while(a[i]>a[j])j--;
    swap(a[i],a[j]);
    sort(a+i+1,a+n+1);
}
main(){
    int t;
    cin>>t;
    while(t--){
    	a[10005]={};
        cin>>n;
        ok=1;
        init();
        next();
        for(int i = 1; i <= n; i++) cout << a[i] <<" ";
        cout<<endl;
    }
}

