#include<iostream>
using namespace std;

int diagonalSum(int mat[][4],int n){
    int sum = 0;

    for(int i=0;i<n;i++){   // TC O(n)
        //pd : j = i
        //sd : j = n-i-1
        //To calculate sum of primary diagonal
        sum += mat[i][i];
        
        //to calculate sum of secondary diagonal, j = n-i-1 because as j increases , i decreases for this diagonal
        if(i!=n-i-1){        //to prevent common element i.e the centremost element being added again to the sum
          sum+=mat[i][n-i-1];  
        }
    }
    return sum;
    
}
int main(){
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rows = 4 ;  //Only rows required coz rows = cols in this case
    int ans = diagonalSum(matrix,rows);
    cout<<ans<<endl;

    return 0;
}