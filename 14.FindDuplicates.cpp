#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
	     for(int j=i+1;j<=n;j++){
	     	if(arr[i]==arr[j] && i!=j)
	     	{
	     		cout<<arr[i];
			 }
		 }
	}
}
