#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
int start=0;
int end=n-1;
int mid;
int first=-1,last=-1;
while(start<=end){
	mid=(start+end)/2;
	if(arr[mid]==key){
		cout<<"got it";
		return mid;
	}
	else if(arr[mid]>key){
		end=mid-1;
	}
	else{
		start=mid+1;
	}
}

}
int main(){
	int n,arr[100];
	cout<<"Enter the size of the array";
	cin>>n;
	
	cout<<"Enter the element of the array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the key";
	cin>>key;
	cout<<BinarySearch(arr,n,key);
	return 0;

}