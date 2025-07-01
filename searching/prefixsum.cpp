#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array";
	cin>>n;
	int arr[100],prefix[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<prefix[i];
	}
}