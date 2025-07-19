#include<iostream>
using namespace std;

int getMaxSum(int mat[][3], int rows, int col){
    int maxSum = 0;

    for(int i=0; i<col; i++){
        int sum=0;
        for(int j=0;j<rows; j++){
            sum+=mat[j][i];
        }
       maxSum = max(sum, maxSum);
    }
    return maxSum;
}
int main(){
    int matrix[4][3] = {{4,5,7},{8,2,9},{3,1,2},{7,6,5}};
    int rows = 4;
    int cols = 3;
    int ans = getMaxSum(matrix,rows,cols);
    cout<<ans<<endl;

    return 0;
}