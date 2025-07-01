#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	int height[100];
	for(int i=0;i<n;i++){
		cin>>height[i];
	}
    
        int leftmax=0,rightmax=0,water=0,maxheight=height[0],index=0;
       
       //max-height
        for(int i=1;i<n;i++){
            if(height[i]>maxheight){
                maxheight=height[i];
                index=i;
            }
        }

        //leftmax
        for(int i=0;i<index;i++){
            if(leftmax>height[i]){
             water+=leftmax-height[i];
            }
            else{
                leftmax=height[i];
            }
        }

        //rightmax
        for(int i=n-1;i>index;i--){
            if(rightmax>height[i]){
                water+=rightmax-height[i];
            }
            else{
                rightmax=height[i];
            }
        }
        cout<<water;
    }


	

    
