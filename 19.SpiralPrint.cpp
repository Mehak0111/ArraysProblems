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
	
	int row=n;
	int col=m;
	
	int count=0;
	int total=n*m;
	
	//index initialization
	int startingRow=0;
	int startingCol=0;
	int endingRow=row-1;
	int endingCol=col-1;
	
	while(count<total){
		//print starting row
		for(int index=startingCol;index<=endingCol;index++){
			cout<<arr[startingRow][index]<<" ";
		}
		startingRow++;
		
		//printing ending column
		for(int index=startingRow;index<=endingRow;index++){
			cout<<arr[index][endingCol]<<" ";
		}
		endingCol--;
		
		//printing ending row
		for(int index=endingCol;index>=startingCol;index--){
			cout<<arr[endingRow][index]<<" ";
		}
		endingRow--;
		
		//printing starting column
		for(int index=endingRow;index>=startingRow;index--){
			cout<<arr[index][startingCol]<<" ";
		}
		startingCol++;
	}
}
