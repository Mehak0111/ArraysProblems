//Kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxi=INT_MIN;
	int sum=0;
	 or(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum<0){
			sum=0;
		}
        maxi=max(maxi,sum);
	}
	cout<<maxi<<endl;
}
