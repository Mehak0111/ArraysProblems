#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			sum+=arr[i][j];
		}
			if(sum>maxi){
		maxi=sum;
	}
	}
	cout<<maxi<<endl;
}
