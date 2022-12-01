//Longest arithmetic subarray
//An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=2;
	int pd=a[1]-a[0];
	int j=2;
	int curr=2;
	while(j<n){
		if(pd==a[j]-a[j-1]){
			curr++;
		}
		else{
			pd=a[j]-a[j-1];
			curr=2;
		}
		ans=max(ans,curr);
		j++;
	}
	cout<<ans;
}
