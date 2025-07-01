#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array";
	cin>>n;
	int arr[100];
	cout<<"Enter the Element of the array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int start=0,end=n-1;
	while(start<end){
		if(arr[start]==0){
			start++;
		}
		else{
			if(arr[end]==0){
				swap(arr[start],arr[end]);
				start++;
				end--;
			}
			else{
				end=end-1;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}

}