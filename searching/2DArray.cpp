#include <iostream>
using namespace std;
void print(int matrix[][4], int row, int col)
{
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < col; j++)
// 		{
// 			if (arr[i][j] == x)
// 			{
// 				cout << "yes";
// 			}
// 		}
// 	}
// 	

//Row Index with Max Sum      
// int sum=INT16_MIN;
// int index=-1;
// for(int i=0;i<row;i++){
// 	int total=0;
// 	for(int j=0;j<col;j++){
// 		total+=arr[i][j];
	

// 		if(sum<total){
// 			sum=total;
// 			index=i;
// 		}
		
// }
// 	}
// 	cout<<index;


	for(int i=0;i<row;i++){
		int start=0,end=3;
		while(start<end){
			swap(matrix[i][start],matrix[i][end]);
			start++;end--;
		}

	}
	for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
	  cout<<matrix[i][j];
	  }
	 }
}
void  diagonalSum(int arr1[][3],int row,int col){
 //first Diagonal
  int first=0,second=0;
  for(int i=0;i<row;i++){
	first+=arr1[i][i];
  }
  //second Diagonal
  int i=0,j=col-1;
  while(j>=0){
	second+=arr1[i][j];
	i++;j--;
  }

  cout<<"first"<<first<<"second"<<second;

}
	



int main()
{
	// 	int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// int arr[5][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
	// int arr2[3][4] = {3, 4, 1, 2, 2, 2, 2, 0, 1, 3, 5, 4};
    // print(arr, 3, 4);
	// diagonalSum(arr1,3,3);
	// int ans[3][4];
	// int row,col;
	//   for(row=0;row<3;row++){
    //   for(col=0;col<4;col++){
	//  ans[row][col]= arr1[row][col]+arr2[row][col];
	//   }
	// }

	// for(row=0;row<3;row++){
    //   for(col=0;col<4;col++){
	//    cout<<ans[row][col];
	//   }
	// }

	//Reverse Each row of Matrix

	int matrix[3][4]={2,3,4,5,1,2,6,8,4,9,3,2};
	 print(matrix, 3, 4);
	 	
return 0;

}