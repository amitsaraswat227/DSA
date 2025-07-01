#include<iostream>
#include<vector>
using namespace std;
void WaveForm( vector<vector<int>>Wave,int n,int m){
   int i,j;
    for(j=0;j<m;j++){
		if(j%2==0){
			for(int i=0;i<n;i++)
			cout<<Wave[i][j];
		}
		else{
			for(int i=n-1;i>=0;i--){
				cout<<Wave[i][j];
			}
		}
	}
}
int  main(){
	int n,m;
	cin>>n>>m;
    vector<vector<int>>Wave(n,vector<int>(m,1));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>Wave[i][j];
		}
	}
	WaveForm(Wave,n,m);
}