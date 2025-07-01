#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[1000];
	int start=0,end=n-1,target,mid;
	int ans=n;
	cout<<"Enter the size of the array";
	cin>>n;
	
	cout<<"Enter the element of the array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the target";
	cin>>target;
	while(start<=end){
		mid=(start)+(end-start)/2;
		if(arr[mid]==target){
			ans=mid;
		
		}
		else if(arr[mid]>target){
			ans=mid;
			end=mid-1;
	        
		
		}
		else{
			start=mid+1;
		}
		
		return ans;
	}
  
	
	
	

}