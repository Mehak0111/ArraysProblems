//No. of record breaking days
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==1){
		cout<<"1"<<endl;
		return 0;
	}
	int ans=0;
	int mx=-1;
	for(int i=0;i<n;i++){
		if(arr[i]>mx&&arr[i]>arr[i+1]){
			ans++;
		}
		mx=max(mx,arr[i]);
	}
	cout<<ans<<endl;
	return 0;
}
