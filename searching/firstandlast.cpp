#include<iostream>
using namespace std;
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
	int start=0,end=n-1,first=-1,last=-1,mid;
	//first position
	while(start<=end){
		mid=(start)+(end-start)/2;
		if(arr[mid]==key){
			first=mid;
			end=mid-1;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		
	}
	cout<<"first position" <<" "<<first;
//last position
 start=0,end=n-1;
	while(start<=end){
		mid=(start)+(end-start)/2;
		if(arr[mid]==key){
			last=mid;
			start=mid+1;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		
	}
cout<<"last position"<<last;

	return 0;

}