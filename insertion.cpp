#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(int i=0;i<n;i++){
     cin>>arr[i];
	} 
	for(int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			}
			else{
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}