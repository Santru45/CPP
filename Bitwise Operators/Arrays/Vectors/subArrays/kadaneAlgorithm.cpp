#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {3,-4,5,4,-1,7,-8};
    int n = sizeof(nums)/sizeof(int);

    int currSum=0,maxSum=INT32_MIN;
    for(int i : nums){
        currSum = currSum + i;
        maxSum = max(currSum , maxSum);
        if(currSum<0){
            currSum=0;
        }
        
    }

    cout<<"The maximum sum is :"<<maxSum;
    return 0;
}