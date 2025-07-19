#include<iostream>
using namespace std;

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n = sizeof(arr)/sizeof(int);
    
    int maxSum = INT32_MIN;
    for(int start=0;start<n;start++){
        int currSum = 0;
        for(int end=start; end<n;end++){
            currSum = currSum+arr[end];
            maxSum = max(currSum , maxSum);
        }
    }

    cout<<"The max sum is : "<<maxSum;                  //This is using bruteforce approach
    return 0;
}