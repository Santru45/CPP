#include<iostream>
using namespace std;

pair<int,int> linearSearch(int mat[][3], int rows, int col, int key){
    pair<int,int> ans;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(key == mat[i][j]){
                ans = {i,j};
            }
        }
    }
    return ans;
}
int main(){
    int matrix[4][3] = {{1,2,3,},{4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int cols = 3;
    int key = 8;
    pair<int,int> ans = linearSearch(matrix,rows,cols, key);
    cout<<ans.first<<" "<<ans.second<<endl;

    return 0;
}