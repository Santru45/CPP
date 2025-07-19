#include<iostream>
#include<vector>
using namespace std;

int majorityElement(int nums[], int n){
    for(int i=0;i<n;i++){
        int freq =0;
        for(int j=0;j<n;j++){
            if(nums[j]==nums[i]){
                freq++;
            }
        }
        if(freq>(n/2)){
            return nums[i];
        }
    }

}
int main(){
    int nums[] = {3,4,3,2,3,1,3,6,3,3};
    int n = sizeof(nums)/sizeof(int);
    int ans = majorityElement(nums,n);
    cout<<"The majority element is : "<<ans;
    return 0;
}