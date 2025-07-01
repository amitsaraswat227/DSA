// Brute force approach time complexity O(n^2)
// #include<iostream>
// using namespace std;
// int main(){
// 	int n,arr[100];
// 	cin>>n;
// 	for(int i=0;i<n;i++){
//      cin>>arr[i];
// 	}
// 	int i,j,x,difference,sum;
// 	cin>>difference;
// 	for(int i=0;i<n-1;i++){
// 		for(int j=i+1;j<n;j++){
// 			if(arr[j]-arr[i]==difference){
// 				cout<<arr[j]<<"-"<<arr[i];
// 				break;
// 			}
// 		}   
// 	}
// }

//Normal approach time complexity O(NlogN) array is sorted when apply this approach
// #include<iostream>
// using namespace std;
// int main(){
// 	int n,arr[100];
// 	cin>>n;
// 	for(int i=0;i<n;i++){
//      cin>>arr[i];
// 	}
// 	int start,end,x,target,mid;
// 	cin>>target;
// 	for(int i=0;i<n-1;i++){
//         x=target+arr[i];
// 		start=i+1;end=n-1;
// 		while(start<end){
// 			mid=(start+end)/2;
// 			if(arr[mid]==x){
// 				cout<<x<<"-"<<arr[i];
// 				break;
// 			}
// 			else if(arr[mid]<x){
// 				start=mid+1;
// 			}
// 			else{
// 				end=mid-1;
// 			}
// 		}
// 	}
// }


//optimize approach Two pointer approach
#include<iostream>
using namespace std;
int main(){
	int n,arr[100],start,end;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	start=0,end=1;
	while(end<n){
		if(arr[end]-arr[start]==target){
			cout<<arr[end]<<"-"<<arr[start];
			break;
		}
		else if(arr[end]-arr[start]<target){
			end++;
		}
		else{
			start++;
		}
	}
}