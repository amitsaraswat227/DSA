#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100],prefix=0,maxi=INT16_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}  
	for(int i=0;i<n;i++){
		prefix=prefix+arr[i];
		maxi=max(maxi,prefix);
		if(prefix<0){
			prefix=0;
		}
	}
	cout<<maxi;
	return 0;
}