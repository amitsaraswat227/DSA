#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>arr){
	int prefix=0,total_sum=0,ans,n=arr.size();
	for(int i=0;i<n;i++){
		total_sum+=arr[i];
	}
	for(int i=0;i<n;i++){
		prefix=prefix+arr[i];
		ans=total_sum-prefix;

		if(ans==prefix){
		return 1;
		
		}
		
	}
	return 0; 

}
int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<divide(arr);
	return 0;
}
