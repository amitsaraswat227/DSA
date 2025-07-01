//first approach
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
//         x=target-arr[i];
// 		start=i+1;end=n-1;
// 		while(start<end){
// 			mid=(start+end)/2;
// 			if(arr[mid]==x){
// 				cout<<x<<"+"<<arr[i];
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

//second Approach Two Pinter Approach
#include<iostream>
using namespace std;
int main(){
	int n,arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
     cin>>arr[i];
	}
	int start,end,x,target,sum;
	cin>>target;
	start=0;
	end=n-1;
	while(start<end){
		sum=arr[start]+arr[end];
		if(sum==target){
			cout<<arr[start]<<"+"<<arr[end];
			break;
		}
		else if(sum>target){
			end=end-1;
		}
		else{
			start=start+1;
		}
		
	}
	
}