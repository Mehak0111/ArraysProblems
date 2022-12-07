#include<iostream>
using namespace std;
void binarySearch(int arr[][m],int n,int m){
	int row=n;
	int col=m;
	
	int start=0;
	int end=row*col-1;
	
	int mid=start+(end-start)/2;
	int ele=arr[mid/col][mid%col];
	while(start<=end){
		if(ele==t){
			return 1;
		}
		if(ele<t){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return 0;
}
int main(){
	int n,m;
	cin>>n>>m;
	int t;
	cin>>t;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[n][m];
		}
	}
	int isfound=binarySearch(arr,n,m);
	if(isfound){
		cout<<"element found";
	}
	else{
		cout<<"element not found";
	}
}
