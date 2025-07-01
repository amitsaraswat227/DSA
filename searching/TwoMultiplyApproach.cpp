#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int start=0,end=n-1;
	while(start<=end){
		if(arr[start]*arr[end]==target){
			cout<<arr[start]<<"*"<<arr[end];
			
			break;
		}
		else if (arr[start]*arr[end]<target){
			start++;
		}
		else{
			end--;
		}
		
	}
	return 0;
}



