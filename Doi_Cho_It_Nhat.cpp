#include<bits/stdc++.h>
using namespace std;

int minimumSwaps(int arr_count, int* arr) {
    long long int i,count=0,j,temp,min,min_index;
    for(i=0;i<arr_count;i++){
        min=arr[i];
        min_index=i;
        for(j=i+1;j<arr_count;j++){
            if(arr[j]<min){
                min=arr[j];
                min_index=j;
            }
        }
        if(min_index!=i){
            count++;
            temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        }
    }
    return count;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<minimumSwaps(n,a);
        cout<<endl;
    }
}


