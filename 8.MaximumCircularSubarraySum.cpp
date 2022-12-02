//MAXIMUM CIRCULAR SUBARRAY SUM
#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n)
{
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum<0){
			sum=0;
		}
		maxi=max(sum,maxi);
	}
	return maxi;
}
int main()
{

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int wrapsum;
	int nonwrapsum;
	
	nonwrapsum=kadane(arr,n);
	int totalsum=0;
	for(int i=0;i<n;i++){
		arr[i]=-arr[i];
	}
	wrapsum=totalsum + kadane(arr,n);
	
	cout<<max(wrapsum,nonwrapsum)<<endl;
}
