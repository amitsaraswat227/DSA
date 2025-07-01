#include<iostream>
using namespace std;
#include<vector>
int main(){
	int arr[100];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	
        for(int i=0;i<n;i++){
            arr[i]--;
        }
        for(int i=0;i<n;i++){
            arr[arr[i]%n]+=n;
        }
       
        for(int i=0;i<n;i++){
            if(arr[i]/n==2){
                cout<<i+1;
                
            }
           
        }
        for(int i=0;i<n;i++){
            if(arr[i]/n==0){
            cout<<i+1;
                
            }
           
        }
		return 0;
}